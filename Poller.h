//
// Created by zero on 1/16/22.
//

#ifndef ECHOSERVER_POLLER_H
#define ECHOSERVER_POLLER_H

#include <vector>

class Channel;

class Poller
{
public:
    Poller() = default;
    virtual ~Poller() = default;
    virtual void getActiveChannels(std::vector<Channel*>&) = 0;
    virtual void updateChannel(Channel*) = 0;
    virtual void removeChannel(Channel*) = 0;
};


#endif //ECHOSERVER_POLLER_H
