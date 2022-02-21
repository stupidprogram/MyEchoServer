//
// Created by zero on 2/11/22.
//

#include "LogStream.h"

LogStream::LogStream()
        : buffer_()
{

}

LogStream& LogStream::operator<<(const std::string& str)
{
    buffer_.append(str.c_str(), str.size());
    return *this;
}

LogStream& LogStream::operator<<(int num)
{
    std::string tmp(std::to_string(num));
    return operator<<(tmp);
}

LogStream& LogStream::operator<<(const char c)
{
    buffer_.append(&c, 1);
    return *this;
}

LogStream& LogStream::operator<<(unsigned int num)
{
    std::string tmp(std::to_string(num));
    return operator<<(tmp);
}

LogStream& LogStream::operator<<(const char* str)
{
    return operator<<(std::string(str));
}

LogStream& LogStream::operator<<(long num)
{
    return operator<<(std::to_string(num));
}

LogStream& LogStream::operator<<(unsigned long num)
{
    return operator<<(std::to_string(num));
}

void LogStream::Buffer::append(const char* words, size_t len)
{
    size_t curLen = readBytes();
    buffer_.resize(curLen + len);
    std::copy(words, words + len, &*buffer_.begin() + curLen);
}