//
// Created by zero on 1/16/22.
//

#ifndef ECHOSERVER_EVENTLOOP_H
#define ECHOSERVER_EVENTLOOP_H

#include <thread>
#include <functional>
#include <vector>
#include <atomic>
#include <memory>
#include <mutex>

#include "Poller.h"
#include "TypeDef.h"

class Channel;

class EventLoop
{
    using Functor = std::function<void ()>;
public:
    EventLoop();
    void updateChannel(Channel*);

    bool runInLoop();

    void loop();

    void queueInLoop(Functor cb);

    void removeChannel(Channel*);

private:
    Poller* poller_;
    std::thread::id threadId_;
    std::vector<Channel*> activeChannels_;

    int wakeupFd_;
    std::unique_ptr<Channel> wakeupChannel_;

    std::vector<Functor> pendingFunctors_;
    std::atomic_bool callPendingFunctor_;
    std::mutex pendingMutex_;
    std::atomic_bool quit_;

    void wake();
    void hanleRead();
    void doPendingFunctors();
};


#endif //ECHOSERVER_EVENTLOOP_H
