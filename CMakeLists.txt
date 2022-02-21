cmake_minimum_required(VERSION 3.16)
project(EchoServer)

set(CMAKE_CXX_STANDARD 11)

add_executable(EchoServer main.cpp EventLoop.cpp EventLoop.h Poller.cpp Poller.h InetAddr.cpp InetAddr.h sockets.cpp sockets.h Socket.cpp Socket.h Channel.cpp Channel.h TypeDef.h TcpConnection.cpp TcpConnection.h Buffer.cpp Buffer.h EpollPoller.cpp EpollPoller.h Acceptor.cpp Acceptor.h TcpServer.cpp TcpServer.h EchoServer.cpp EchoServer.h ThreadPool.cpp ThreadPool.h LogStream.cpp LogStream.h Logger.cpp Logger.h simpleTime.h simpleTime.cpp)

target_link_libraries(EchoServer pthread)