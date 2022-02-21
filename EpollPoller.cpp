//
// Created by zero on 1/18/22.
//

#include "EpollPoller.h"

#include <sys/epoll.h>
#include <iostream>
#include <unistd.h>

#include "Channel.h"
#include "Logger.h"

EpollPoller::EpollPoller()
        : Poller(),
          channelMap_()
{
    epfd = ::epoll_create1(0);
    if (epfd < 0)
    {
        LOG_FATAL << "epoll_create1 failed in EpollPoller";
    }
}

void EpollPoller::getActiveChannels(std::vector<Channel*>& activeChannel)
{
    struct epoll_event evlist[10];
    int ret = ::epoll_wait(epfd, evlist, 10, -1);

    if (ret < 0)
    {
        LOG_FATAL << "epoll_wait error in EpollPoller::getActiveChannels";
    }

    for (int i = 0; i < ret; ++i)
    {
        int fd = evlist[i].data.fd;
        Channel* channel = channelMap_[fd];
        channel->setReturnEvent(evlist[i].events);

        activeChannel.push_back(channel);
    }
}

void EpollPoller::updateChannel(Channel* channel)
{
    int fd = channel->fd();
    int op = 0;
    if (channelMap_.find(fd) == channelMap_.end())
    {
        channelMap_[fd] = channel;
        op = EPOLL_CTL_ADD;
    }
    else
    {
        op = EPOLL_CTL_MOD;
    }

    struct epoll_event ev{};
    ev.data.fd = fd;
    ev.events = channel->getEvent();

    int ret = ::epoll_ctl(epfd, op, fd, &ev);

    if (ret < 0)
    {
        LOG_FATAL << "epoll_ctl error in EPollPoller::updateChannel";
    }
}

EpollPoller::~EpollPoller()
{
    ::close(epfd);
}

void EpollPoller::removeChannel(Channel* channel)
{
    int fd = channel->fd();

    int ret = ::epoll_ctl(epfd, EPOLL_CTL_DEL, fd, nullptr);

    if (ret < 0)
    {
        LOG_FATAL << "epoll_ctl error when delete fd in EpollPoller::removeChannel!";
    }

    channelMap_.erase(fd);
}