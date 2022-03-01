//
// Created by flower on 2022/2/28.
//

#ifndef ECHOSERVER_THREADWRAPPER_H
#define ECHOSERVER_THREADWRAPPER_H

#include <thread>

class ThreadWrapper
{
public:
    ThreadWrapper(std::thread& t);

private:
    std::thread thread_;
};


#endif //ECHOSERVER_THREADWRAPPER_H
