//
// Created by zero on 1/24/22.
//

#include "TcpServer.h"

#include <arpa/inet.h>
#include <iostream>

#include "TcpConnection.h"
#include "Logger.h"

TcpServer::TcpServer(EventLoop* loop, const InetAddr& addr)
        : acceptor_(loop, addr),
          loop_(loop),
          tcpConnectionMap_()
{
    using std::placeholders::_1;
    using std::placeholders::_2;
    acceptor_.setConnectionCallback(std::bind(&TcpServer::handleConnection, this, _1, _2));
}

void TcpServer::handleConnection(int fd, const InetAddr& addr)
{
    char buf[BUFSIZ];
    int iaddr = addr.getAddr();
    ::inet_ntop(PF_INET, &iaddr, buf, BUFSIZ);

    std::string name = "IP: " + std::string(buf) + " Port: " + std::to_string(::ntohs(addr.getPort()));

    std::shared_ptr<TcpConnection> conn(new TcpConnection(loop_, fd, name));

    tcpConnectionMap_[name] = conn;

    conn->setReadCallback(readCallback_);
    conn->setWriteCallback(writeCallback_);
    conn->setCloseCallback(std::bind(&TcpServer::handleClose, this, std::placeholders::_1));

    if (connectionCallback_)
        connectionCallback_(conn);

    LOG_TRACE << name << " connect to this server";
}

void TcpServer::start()
{
    acceptor_.enableReading();
}

void TcpServer::handleClose(const TcpConnectionPtr& conn)
{
    tcpConnectionMap_.erase(conn->name());
    loop_->queueInLoop(std::bind(&TcpConnection::connectionDestroy, conn));
}