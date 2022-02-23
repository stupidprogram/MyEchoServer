//
// Created by zero on 1/24/22.
//

#ifndef ECHOSERVER_ECHOSERVER_H
#define ECHOSERVER_ECHOSERVER_H

#include <memory>
#include <vector>

#include "TcpServer.h"
#include "EventLoop.h"
#include "InetAddr.h"
#include "TcpConnection.h"
#include "Buffer.h"
#include "TypeDef.h"
#include "ThreadPool.h"
#include "WheelVector.cpp"
#include "Logger.h"

class EchoServer
{
public:
    EchoServer(EventLoop*, const InetAddr&, int idleSeconds);
    void start();

private:
    class Entry
    {
    public:
        Entry(const TcpConnectionPtr& conn) : pointer_(conn)
        {

        }

        ~Entry()
        {
            TcpConnectionPtr conn = pointer_.lock();
            if (conn)
            {
                conn->shutdown();
                LOG_DEBUG << "TcpConnection has been shutdown by wheels entry";
            }
        }

    private:
        std::weak_ptr<TcpConnection> pointer_;
    };
    std::unique_ptr<TcpServer> server_;
    std::unique_ptr<ThreadPool> threadPool_;

    void onConnection(const TcpConnectionPtr&);
    void onMessage(const TcpConnectionPtr& conn, Buffer* buffer);
    void calmTest(const TcpConnectionPtr& conn, Buffer* buffer);
    void onTimer();
    EventLoop* loop_;
    using EntryPtr = std::shared_ptr<Entry>;
    using WeakEntryPtr = std::weak_ptr<Entry>;
    using Buckets = std::vector<EntryPtr>;
    WheelVector<Buckets> wheels_;
};


#endif //ECHOSERVER_ECHOSERVER_H
