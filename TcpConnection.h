//
// Created by zero on 1/17/22.
//

#ifndef ECHOSERVER_TCPCONNECTION_H
#define ECHOSERVER_TCPCONNECTION_H

#include <memory>
#include <utility>
#include <string>

#include "Socket.h"
#include "Channel.h"
#include "EventLoop.h"
#include "TypeDef.h"
#include "Buffer.h"

class TcpConnection
        : public std::enable_shared_from_this<TcpConnection>
{
public:
    TcpConnection(EventLoop*, int, const std::string&);

    void setReadCallback(ReadCallback cb)
    { readCallback_ = std::move(cb); }

    void setWriteCallback(WriteCallback cb)
    { writeCallback_ = std::move(cb); }

    void setConnectionCallback(ConnectionCallback cb)
    { connectionCallback_ = std::move(cb); }

    void setCloseCallback(CloseCallback cb)
    { closeCallback_ = std::move(cb); }

    std::string name()
    { return name_; }

    void send(const std::string&);

    void connectionDestroy();

private:
    std::unique_ptr<Socket> socket_;
    std::unique_ptr<Channel> channel_;
    const std::string name_;

    EventLoop* loop_;

    Buffer inputeBuffer_;
    Buffer outputBuffer_;

    ReadCallback readCallback_;
    WriteCallback writeCallback_;
    ConnectionCallback connectionCallback_;
    CloseCallback closeCallback_;

    void handleRead();
    void handleWrite();
    void handleClose();
    void handleError();

    void sendInLoop();
};


#endif //ECHOSERVER_TCPCONNECTION_H
