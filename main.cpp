#include "EventLoop.h"
#include "InetAddr.h"
#include "EchoServer.h"
#include "Logger.h"

int main()
{
    EventLoop loop;
    InetAddr address(9999);
    EchoServer server(&loop, address);
    LOG_TRACE << "TEST START";
    server.start();
    loop.loop();
    return 0;
}
