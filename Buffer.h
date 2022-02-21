//
// Created by zero on 1/17/22.
//

#ifndef ECHOSERVER_BUFFER_H
#define ECHOSERVER_BUFFER_H

#include <vector>
#include <string>

class Buffer
{
public:
    Buffer();

    std::string getAsString();

    size_t readableBytes()
    { return writeIndex_ - readIndex_; }

    void append(const char*, size_t);
    size_t readFd(int);
    size_t writeFd(int);

private:
    std::vector<char> data_;
    size_t writeIndex_;
    size_t readIndex_;

    size_t writeableBytes()
    { return data_.size() - writeIndex_; }


    void makeSpace(size_t n);
};


#endif //ECHOSERVER_BUFFER_H
