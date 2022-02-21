//
// Created by flower on 2022/2/21.
//

#include "TimerQueue.h"

#include <sys/timerfd.h>
#include <functional>
#include <unistd.h>

#include "Logger.h"
#include "EventLoop.h"
#include "Channel.h"

static int createTimerFd()
{
    int tfd = ::timerfd_create(CLOCK_REALTIME, 0);
    if (tfd < 0)
        LOG_FATAL << "timeerfd_create failed in createTimerFd";
    return tfd;
}

TimerQueue::TimerQueue(EventLoop* loop)
:loop_(loop),
timerFd_(createTimerFd()),
timerChannel_(new Channel(loop, timerFd_))
{
    timerChannel_->setHandleRead(std::bind(&TimerQueue::handleRead, this));
}

void TimerQueue::addtimer(int interval, std::function<void()> cb)
{
    callback_ = std::move(cb);
    struct itimerspec it{};
    it.it_value.tv_sec = interval;
    it.it_value.tv_nsec = 0;
    it.it_interval.tv_nsec = 0;
    it.it_interval.tv_sec = interval;

    int ret = ::timerfd_settime(timerFd_, 0, &it, nullptr);
    if (ret < 0)
        LOG_FATAL << "timerfd_settime faild in TimerQueue::addtimer";
    timerChannel_->enableReading();
}

void TimerQueue::handleRead()
{
    uint64_t one = 1;
    ::read(timerFd_, &one, sizeof(one));
    if (callback_)
    {
        callback_();
        LOG_TRACE << "timer callback excute!";
    }
}
