//
// Created by zero on 1/24/22.
//

#ifndef ECHOSERVER_ECHOSERVER_H
#define ECHOSERVER_ECHOSERVER_H

#include <memory>

#include "TcpServer.h"
#include "EventLoop.h"
#include "InetAddr.h"
#include "TcpConnection.h"
#include "Buffer.h"
#include "TypeDef.h"
#include "ThreadPool.h"

class EchoServer
{
public:
    EchoServer(EventLoop*, const InetAddr&);
    void start();

private:
    std::unique_ptr<TcpServer> server_;
    std::unique_ptr<ThreadPool> threadPool_;

    void onConnection();
    void onMessage(const TcpConnectionPtr& conn, Buffer* buffer);
    void calmTest(const TcpConnectionPtr& conn, Buffer* buffer);
    EventLoop* loop_;
};


#endif //ECHOSERVER_ECHOSERVER_H
