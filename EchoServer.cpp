//
// Created by zero on 1/24/22.
//

#include "EchoServer.h"

#include <iostream>
#include <string>

#include "Logger.h"


EchoServer::EchoServer(EventLoop* loop, const InetAddr& addr)
        : server_(new TcpServer(loop, addr)),
          threadPool_(new ThreadPool(5)),
          loop_(loop)
{
    using std::placeholders::_1;
    using std::placeholders::_2;
    server_->setConnectionCallback(std::bind(&EchoServer::onConnection, this));
    server_->setReadCallback(std::bind(&EchoServer::onMessage, this, _1, _2));
}

void EchoServer::onConnection()
{
    LOG_TRACE << "some one has connect to this host";
}

void EchoServer::onMessage(const TcpConnectionPtr& conn, Buffer* buffer)
{
    threadPool_->run(std::bind(&EchoServer::calmTest, this, conn, buffer));
}

void EchoServer::start()
{
    server_->start();
}
void onTimer(const TcpConnectionPtr& conn)
{
    std::string message = "period test";
    conn->send(message);
}

void EchoServer::calmTest(const TcpConnectionPtr& conn, Buffer* buffer)
{
    std::string message = buffer->getAsString();
    LOG_TRACE << "receive " << message.size() << " bytes from " << conn->name() << ": " << message;
    loop_->runEvery(1, std::bind(&onTimer, conn));
    std::this_thread::sleep_for(std::chrono::seconds(3));
    conn->send(message);
}