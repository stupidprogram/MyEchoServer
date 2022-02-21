//
// Created by flower on 2022/2/2.
//

#include "ThreadPool.h"

#include <thread>


ThreadPool::ThreadPool(int size)
        : mutexList_(size),
          functionList_(size),
          conditionList_(size),
          quit_(false),
          next_(0),
          poolSize_(size)
{
    for (int i = 0; i < size; ++i)
    {
        std::thread tmp([this, i](){
            while (!quit_)
            {
                std::function<void ()> call;
                {
                    std::unique_lock<std::mutex> uni(mutexList_[i]);
                    while (functionList_[i].empty())
                        conditionList_[i].wait(uni);
                    call = std::move(functionList_[i].front());
                    functionList_[i].pop_front();
                }
                call();
            }
        });
        tmp.detach();
    }
}

void ThreadPool::run(std::function<void()> cb)
{
    std::unique_lock<std::mutex> uniq(mutexList_[next_]);
    functionList_[next_].push_back(std::move(cb));
    int mark = next_;
    if (++next_ == poolSize_)
    {
        next_ = 0;
    }
    conditionList_[mark].notify_all();
}