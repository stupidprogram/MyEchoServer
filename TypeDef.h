//
// Created by zero on 1/17/22.
//

#ifndef ECHOSERVER_TYPEDEF_H
#define ECHOSERVER_TYPEDEF_H

#include <functional>
#include <memory>

class TcpConnection;
class Buffer;

using TcpConnectionPtr = std::shared_ptr<TcpConnection>;

using ReadCallback = std::function<void (const TcpConnectionPtr&, Buffer*)>;
using WriteCallback = std::function<void ()>;
using ConnectionCallback = std::function<void ()>;
using CloseCallback = std::function<void (const TcpConnectionPtr&)>;

#endif //ECHOSERVER_TYPEDEF_H
