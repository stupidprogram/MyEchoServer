//
// Created by zero on 1/24/22.
//

#include "EchoServer.h"

#include <iostream>
#include <string>
#include <any>

#include "Logger.h"


EchoServer::EchoServer(EventLoop* loop, const InetAddr& addr, int idleSeconds)
        : server_(new TcpServer(loop, addr)),
          threadPool_(new ThreadPool(5)),
          loop_(loop),
          wheels_(idleSeconds)
{
    using std::placeholders::_1;
    using std::placeholders::_2;
    server_->setConnectionCallback(std::bind(&EchoServer::onConnection, this, _1));
    server_->setReadCallback(std::bind(&EchoServer::onMessage, this, _1, _2));
    loop_->runEvery(1, std::bind(&EchoServer::onTimer, this));
}

void EchoServer::onConnection(const TcpConnectionPtr& conn)
{
    LOG_TRACE << conn->name() << " connect to this host";
    EntryPtr entry(new Entry(conn));
    conn->setContext(std::weak_ptr<Entry>(entry));
    LOG_DEBUG << "context has set to TcpConnection";
    wheels_.back().push_back(entry);
    LOG_DEBUG << "Entry has pushed to wheels";
}

void EchoServer::onMessage(const TcpConnectionPtr& conn, Buffer* buffer)
{
    threadPool_->run(std::bind(&EchoServer::calmTest, this, conn, buffer));
}

void EchoServer::start()
{
    server_->start();
}

void EchoServer::calmTest(const TcpConnectionPtr& conn, Buffer* buffer)
{
    std::string message = buffer->getAsString();
    LOG_TRACE << "receive " << message.size() << " bytes from " << conn->name() << ": " << message;
    // std::this_thread::sleep_for(std::chrono::seconds(3));
    conn->send(message);
    LOG_DEBUG << "get context from TcpConnection";
    WeakEntryPtr weakEntryPtr = std::any_cast<WeakEntryPtr>(conn->getContext());
    wheels_.back().push_back(weakEntryPtr.lock());
    LOG_DEBUG << "Entry has pushed to wheels in EchoSever::calmTest";
}

void EchoServer::onTimer()
{
    Buckets tmp;
    wheels_.push(tmp);
}