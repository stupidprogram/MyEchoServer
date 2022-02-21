//
// Created by zero on 2/11/22.
//

#ifndef ECHOSERVER_LOGSTREAM_H
#define ECHOSERVER_LOGSTREAM_H

#include <string>
#include <vector>


class LogStream
{
public:
    LogStream();

    LogStream& operator<<(const char*);
    LogStream& operator<<(char);
    LogStream& operator<<(const std::string&);
    LogStream& operator<<(int);
    LogStream& operator<<(unsigned int);
    LogStream& operator<<(long);
    LogStream& operator<<(unsigned long);


    const char* buf()
    { return buffer_.buf(); }

    size_t len()
    { return buffer_.readBytes(); };
private:
    class Buffer
    {
    public:
        void append(const char*, size_t);
        size_t readBytes()
        { return buffer_.size(); }
        const char* buf()
        { return &*buffer_.begin(); }
    private:
        std::vector<char> buffer_;
    };

    Buffer buffer_;
};


#endif //ECHOSERVER_LOGSTREAM_H
