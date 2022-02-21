//
// Created by zero on 1/24/22.
//

#ifndef ECHOSERVER_TCPSERVER_H
#define ECHOSERVER_TCPSERVER_H

#include <unordered_map>
#include <vector>
#include <string>
#include <memory>

#include "EventLoop.h"
#include "InetAddr.h"
#include "Acceptor.h"
#include "Channel.h"
#include "TcpConnection.h"

class TcpServer
{
public:
    TcpServer(EventLoop*, const InetAddr&);

    void setConnectionCallback(ConnectionCallback cb)
    { connectionCallback_ = std::move(cb); }

    void setReadCallback(ReadCallback cb)
    { readCallback_ = std::move(cb); }

    void setWriteCallback(WriteCallback cb)
    { writeCallback_ = std::move(cb); }

    void start();

private:
    EventLoop* loop_;
    Acceptor acceptor_;
    std::unordered_map<std::string, std::shared_ptr<TcpConnection>> tcpConnectionMap_;

    ConnectionCallback connectionCallback_;
    ReadCallback readCallback_;
    WriteCallback writeCallback_;

    void handleConnection(int, const InetAddr&);
    void handleClose(const TcpConnectionPtr&);
};


#endif //ECHOSERVER_TCPSERVER_H
