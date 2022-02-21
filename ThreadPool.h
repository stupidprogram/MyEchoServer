//
// Created by flower on 2022/2/2.
//

#ifndef ECHOSERVER_THREADPOOL_H
#define ECHOSERVER_THREADPOOL_H

#include <functional>
#include <vector>
#include <mutex>
#include <deque>
#include <atomic>
#include <condition_variable>

class ThreadPool
{
public:
    ThreadPool(int size = 5);

    void run(std::function<void ()> cb);

private:
    std::vector<std::deque<std::function<void ()>>> functionList_;
    std::vector<std::mutex> mutexList_;
    std::vector<std::condition_variable> conditionList_;
    std::atomic_bool quit_;
    int next_;
    int poolSize_;
};


#endif //ECHOSERVER_THREADPOOL_H
