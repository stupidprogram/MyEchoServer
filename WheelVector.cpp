//
// Created by flower on 2022/2/22.
//

#include "WheelVector.h"


template<typename T>
void WheelVector<T>::push(T& entry)
{
    data_.push_back(entry);
    data_.pop_front();
}

template<typename T>
T& WheelVector<T>::back()
{
    return data_.back();
}