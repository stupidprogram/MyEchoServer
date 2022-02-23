//
// Created by flower on 2022/2/22.
//

#ifndef ECHOSERVER_WHEELVECTOR_H
#define ECHOSERVER_WHEELVECTOR_H

#include <deque>

template <typename T>
class WheelVector
{
public:
    explicit WheelVector(int size)
            : data_(size)
    {}

    void push(T&);

    T& back();

private:
    std::deque<T> data_;
};


#endif //ECHOSERVER_WHEELVECTOR_H
