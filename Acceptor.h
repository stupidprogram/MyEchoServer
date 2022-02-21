//
// Created by zero on 1/24/22.
//

#ifndef ECHOSERVER_ACCEPTOR_H
#define ECHOSERVER_ACCEPTOR_H

#include <memory>
#include <utility>
#include <functional>

#include "EventLoop.h"
#include "Channel.h"
#include "Socket.h"
#include "InetAddr.h"

class Acceptor
{
    using ConnectionCallback = std::function<void (int, const InetAddr&)>;
public:
    Acceptor(EventLoop*, const InetAddr&);

    void setConnectionCallback(ConnectionCallback cb)
    { connectionCallback_ = std::move(cb); }

    void enableReading();

private:
    int fd_;
    EventLoop* loop_;
    std::unique_ptr<Socket> acceptSocket_;
    std::unique_ptr<Channel> acceptChannel_;
    ConnectionCallback connectionCallback_;

    void handleRead();
};


#endif //ECHOSERVER_ACCEPTOR_H
