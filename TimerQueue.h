//
// Created by flower on 2022/2/21.
//

#ifndef ECHOSERVER_TIMERQUEUE_H
#define ECHOSERVER_TIMERQUEUE_H

#include <memory>
#include <functional>

class EventLoop;
class Channel;

class TimerQueue
{
public:
    TimerQueue(EventLoop*);

    void addtimer(int, std::function<void ()>);
    ~TimerQueue() = default;

private:
    int timerFd_;
    EventLoop* loop_;
    std::unique_ptr<Channel> timerChannel_;

    void handleRead();
    std::function<void ()> callback_;
};


#endif //ECHOSERVER_TIMERQUEUE_H
