//
// Created by zero on 1/17/22.
//

#include "Channel.h"
#include <sys/epoll.h>
#include <iostream>

#ifdef DEBUG
int Channel::mark = 0;
#endif

const int Channel::kNone = 0;
const int Channel::kRead = EPOLLIN;
const int Channel::kWrite = EPOLLOUT;

Channel::Channel(EventLoop* loop, int fd)
        : loop_(loop),
          fd_(fd),
          index_(0),
          event_(0),
          returnEvent_(0)
{
}

void Channel::enableReading()
{
    event_ |= kRead;
    update();
}

void Channel::disableReading()
{
    event_ &= ~kRead;
    update();
}

void Channel::enableWritting()
{
    event_ |= kWrite;
    update();
}

void Channel::disableWritting()
{
    event_ &= ~kWrite;
    update();
}

void Channel::enableAll()
{
    event_ |= (kWrite | kRead);
    update();
}

void Channel::disableAll()
{
    event_ = kNone;
    update();
}

void Channel::handleEvent()
{
    if (returnEvent_ & EPOLLIN && returnEvent_ & EPOLLRDHUP)
    {
        if (handleClose)
        {
            handleClose();
        }
    }
    else if (returnEvent_ & EPOLLIN)
    {
        if (handleRead)
        {
            handleRead();
        }
    }
    else if (returnEvent_ & EPOLLOUT)
    {
        if (handleWrite)
        {
            handleWrite();
        }
    }
}

void Channel::update()
{
    loop_->updateChannel(this);
}

void Channel::remove()
{
    loop_->removeChannel(this);
}