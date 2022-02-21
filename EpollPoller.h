//
// Created by zero on 1/18/22.
//

#ifndef ECHOSERVER_EPOLLPOLLER_H
#define ECHOSERVER_EPOLLPOLLER_H

#include <unordered_map>

#include "Poller.h"

class EpollPoller
        : public Poller
{
public:
    EpollPoller();
    ~EpollPoller();

    void getActiveChannels(std::vector<Channel *> &) override;
    void updateChannel(Channel *) override;
    void removeChannel(Channel *) override;
private:
    int epfd;
    std::unordered_map<int, Channel*> channelMap_;
};


#endif //ECHOSERVER_EPOLLPOLLER_H
