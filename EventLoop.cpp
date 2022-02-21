//
// Created by zero on 1/16/22.
//

#include "EventLoop.h"

#include <sys/eventfd.h>
#include <algorithm>
#include <unistd.h>
#include <iostream>

#include "EpollPoller.h"
#include "Channel.h"
#include "Logger.h"
#include "TimerQueue.h"

static int createFd()
{
    return ::eventfd(0, EFD_NONBLOCK);
}

EventLoop::EventLoop()
        : poller_(new EpollPoller()),
          threadId_(std::this_thread::get_id()),
          wakeupFd_(createFd()),
          wakeupChannel_(new Channel(this, wakeupFd_)),
          callPendingFunctor_(false),
          pendingMutex_(),
          quit_(false),
          activeChannels_(0),
          timer_(new TimerQueue(this))
{
    wakeupChannel_->setHandleRead(std::bind(&EventLoop::hanleRead, this));
    wakeupChannel_->enableReading();
}

bool EventLoop::runInLoop()
{
    return threadId_ == std::this_thread::get_id();
}

void EventLoop::queueInLoop(Functor cb)
{
    {
        std::unique_lock<std::mutex> queueLock(pendingMutex_);
        pendingFunctors_.push_back(std::move(cb));
    }

    if (!runInLoop())
    {
        wake();
    }
}

void EventLoop::doPendingFunctors()
{
    callPendingFunctor_ = true;
    std::vector<Functor> currentExec(0);

    {
        std::unique_lock<std::mutex> uniqueLock(pendingMutex_);
        std::swap(currentExec, pendingFunctors_);
    }

    for (auto& cb : currentExec)
    {
        cb();
    }

    callPendingFunctor_ = false;
}

void EventLoop::wake()
{
    uint64_t one = 1;
    size_t n = ::write(wakeupFd_, &one, sizeof one);
    if (n != sizeof one)
    {
        std::cerr << "wake up does not send 8 bytes!" << std::endl;
    }
}

void EventLoop::hanleRead()
{
    uint64_t one = 1;
    size_t n = ::read(wakeupFd_, &one, sizeof one);
    if (n != sizeof one)
    {
        std::cerr << "wake up does not received 8 bytes!" << std::endl;
    }
}

void EventLoop::loop()
{
    while (!quit_)
    {
        activeChannels_.clear();
        poller_->getActiveChannels(activeChannels_);
        LOG_DEBUG << "get event from poller";
        LOG_DEBUG << "the total events got are " << activeChannels_.size();
        for (auto it : activeChannels_)
        {
            it->handleEvent();
        }

        doPendingFunctors();
    }
}

void EventLoop::updateChannel(Channel* channel)
{
    poller_->updateChannel(channel);
}

void EventLoop::removeChannel(Channel* channel)
{
    poller_->removeChannel(channel);
}

void EventLoop::runEvery(int interval, std::function<void()> cb)
{
    timer_->addtimer(interval, std::move(cb));
    LOG_TRACE << "timer added!";
}

EventLoop::~EventLoop() = default;