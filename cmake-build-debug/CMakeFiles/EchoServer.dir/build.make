# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ubuntu/code/MyEchoServer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntu/code/MyEchoServer/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/EchoServer.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/EchoServer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/EchoServer.dir/flags.make

CMakeFiles/EchoServer.dir/main.cpp.o: CMakeFiles/EchoServer.dir/flags.make
CMakeFiles/EchoServer.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/code/MyEchoServer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/EchoServer.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/EchoServer.dir/main.cpp.o -c /home/ubuntu/code/MyEchoServer/main.cpp

CMakeFiles/EchoServer.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EchoServer.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/code/MyEchoServer/main.cpp > CMakeFiles/EchoServer.dir/main.cpp.i

CMakeFiles/EchoServer.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EchoServer.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/code/MyEchoServer/main.cpp -o CMakeFiles/EchoServer.dir/main.cpp.s

CMakeFiles/EchoServer.dir/EventLoop.cpp.o: CMakeFiles/EchoServer.dir/flags.make
CMakeFiles/EchoServer.dir/EventLoop.cpp.o: ../EventLoop.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/code/MyEchoServer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/EchoServer.dir/EventLoop.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/EchoServer.dir/EventLoop.cpp.o -c /home/ubuntu/code/MyEchoServer/EventLoop.cpp

CMakeFiles/EchoServer.dir/EventLoop.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EchoServer.dir/EventLoop.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/code/MyEchoServer/EventLoop.cpp > CMakeFiles/EchoServer.dir/EventLoop.cpp.i

CMakeFiles/EchoServer.dir/EventLoop.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EchoServer.dir/EventLoop.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/code/MyEchoServer/EventLoop.cpp -o CMakeFiles/EchoServer.dir/EventLoop.cpp.s

CMakeFiles/EchoServer.dir/Poller.cpp.o: CMakeFiles/EchoServer.dir/flags.make
CMakeFiles/EchoServer.dir/Poller.cpp.o: ../Poller.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/code/MyEchoServer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/EchoServer.dir/Poller.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/EchoServer.dir/Poller.cpp.o -c /home/ubuntu/code/MyEchoServer/Poller.cpp

CMakeFiles/EchoServer.dir/Poller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EchoServer.dir/Poller.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/code/MyEchoServer/Poller.cpp > CMakeFiles/EchoServer.dir/Poller.cpp.i

CMakeFiles/EchoServer.dir/Poller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EchoServer.dir/Poller.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/code/MyEchoServer/Poller.cpp -o CMakeFiles/EchoServer.dir/Poller.cpp.s

CMakeFiles/EchoServer.dir/InetAddr.cpp.o: CMakeFiles/EchoServer.dir/flags.make
CMakeFiles/EchoServer.dir/InetAddr.cpp.o: ../InetAddr.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/code/MyEchoServer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/EchoServer.dir/InetAddr.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/EchoServer.dir/InetAddr.cpp.o -c /home/ubuntu/code/MyEchoServer/InetAddr.cpp

CMakeFiles/EchoServer.dir/InetAddr.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EchoServer.dir/InetAddr.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/code/MyEchoServer/InetAddr.cpp > CMakeFiles/EchoServer.dir/InetAddr.cpp.i

CMakeFiles/EchoServer.dir/InetAddr.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EchoServer.dir/InetAddr.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/code/MyEchoServer/InetAddr.cpp -o CMakeFiles/EchoServer.dir/InetAddr.cpp.s

CMakeFiles/EchoServer.dir/sockets.cpp.o: CMakeFiles/EchoServer.dir/flags.make
CMakeFiles/EchoServer.dir/sockets.cpp.o: ../sockets.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/code/MyEchoServer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/EchoServer.dir/sockets.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/EchoServer.dir/sockets.cpp.o -c /home/ubuntu/code/MyEchoServer/sockets.cpp

CMakeFiles/EchoServer.dir/sockets.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EchoServer.dir/sockets.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/code/MyEchoServer/sockets.cpp > CMakeFiles/EchoServer.dir/sockets.cpp.i

CMakeFiles/EchoServer.dir/sockets.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EchoServer.dir/sockets.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/code/MyEchoServer/sockets.cpp -o CMakeFiles/EchoServer.dir/sockets.cpp.s

CMakeFiles/EchoServer.dir/Socket.cpp.o: CMakeFiles/EchoServer.dir/flags.make
CMakeFiles/EchoServer.dir/Socket.cpp.o: ../Socket.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/code/MyEchoServer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/EchoServer.dir/Socket.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/EchoServer.dir/Socket.cpp.o -c /home/ubuntu/code/MyEchoServer/Socket.cpp

CMakeFiles/EchoServer.dir/Socket.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EchoServer.dir/Socket.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/code/MyEchoServer/Socket.cpp > CMakeFiles/EchoServer.dir/Socket.cpp.i

CMakeFiles/EchoServer.dir/Socket.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EchoServer.dir/Socket.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/code/MyEchoServer/Socket.cpp -o CMakeFiles/EchoServer.dir/Socket.cpp.s

CMakeFiles/EchoServer.dir/Channel.cpp.o: CMakeFiles/EchoServer.dir/flags.make
CMakeFiles/EchoServer.dir/Channel.cpp.o: ../Channel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/code/MyEchoServer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/EchoServer.dir/Channel.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/EchoServer.dir/Channel.cpp.o -c /home/ubuntu/code/MyEchoServer/Channel.cpp

CMakeFiles/EchoServer.dir/Channel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EchoServer.dir/Channel.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/code/MyEchoServer/Channel.cpp > CMakeFiles/EchoServer.dir/Channel.cpp.i

CMakeFiles/EchoServer.dir/Channel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EchoServer.dir/Channel.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/code/MyEchoServer/Channel.cpp -o CMakeFiles/EchoServer.dir/Channel.cpp.s

CMakeFiles/EchoServer.dir/TcpConnection.cpp.o: CMakeFiles/EchoServer.dir/flags.make
CMakeFiles/EchoServer.dir/TcpConnection.cpp.o: ../TcpConnection.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/code/MyEchoServer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/EchoServer.dir/TcpConnection.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/EchoServer.dir/TcpConnection.cpp.o -c /home/ubuntu/code/MyEchoServer/TcpConnection.cpp

CMakeFiles/EchoServer.dir/TcpConnection.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EchoServer.dir/TcpConnection.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/code/MyEchoServer/TcpConnection.cpp > CMakeFiles/EchoServer.dir/TcpConnection.cpp.i

CMakeFiles/EchoServer.dir/TcpConnection.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EchoServer.dir/TcpConnection.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/code/MyEchoServer/TcpConnection.cpp -o CMakeFiles/EchoServer.dir/TcpConnection.cpp.s

CMakeFiles/EchoServer.dir/Buffer.cpp.o: CMakeFiles/EchoServer.dir/flags.make
CMakeFiles/EchoServer.dir/Buffer.cpp.o: ../Buffer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/code/MyEchoServer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/EchoServer.dir/Buffer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/EchoServer.dir/Buffer.cpp.o -c /home/ubuntu/code/MyEchoServer/Buffer.cpp

CMakeFiles/EchoServer.dir/Buffer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EchoServer.dir/Buffer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/code/MyEchoServer/Buffer.cpp > CMakeFiles/EchoServer.dir/Buffer.cpp.i

CMakeFiles/EchoServer.dir/Buffer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EchoServer.dir/Buffer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/code/MyEchoServer/Buffer.cpp -o CMakeFiles/EchoServer.dir/Buffer.cpp.s

CMakeFiles/EchoServer.dir/EpollPoller.cpp.o: CMakeFiles/EchoServer.dir/flags.make
CMakeFiles/EchoServer.dir/EpollPoller.cpp.o: ../EpollPoller.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/code/MyEchoServer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/EchoServer.dir/EpollPoller.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/EchoServer.dir/EpollPoller.cpp.o -c /home/ubuntu/code/MyEchoServer/EpollPoller.cpp

CMakeFiles/EchoServer.dir/EpollPoller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EchoServer.dir/EpollPoller.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/code/MyEchoServer/EpollPoller.cpp > CMakeFiles/EchoServer.dir/EpollPoller.cpp.i

CMakeFiles/EchoServer.dir/EpollPoller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EchoServer.dir/EpollPoller.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/code/MyEchoServer/EpollPoller.cpp -o CMakeFiles/EchoServer.dir/EpollPoller.cpp.s

CMakeFiles/EchoServer.dir/Acceptor.cpp.o: CMakeFiles/EchoServer.dir/flags.make
CMakeFiles/EchoServer.dir/Acceptor.cpp.o: ../Acceptor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/code/MyEchoServer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/EchoServer.dir/Acceptor.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/EchoServer.dir/Acceptor.cpp.o -c /home/ubuntu/code/MyEchoServer/Acceptor.cpp

CMakeFiles/EchoServer.dir/Acceptor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EchoServer.dir/Acceptor.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/code/MyEchoServer/Acceptor.cpp > CMakeFiles/EchoServer.dir/Acceptor.cpp.i

CMakeFiles/EchoServer.dir/Acceptor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EchoServer.dir/Acceptor.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/code/MyEchoServer/Acceptor.cpp -o CMakeFiles/EchoServer.dir/Acceptor.cpp.s

CMakeFiles/EchoServer.dir/TcpServer.cpp.o: CMakeFiles/EchoServer.dir/flags.make
CMakeFiles/EchoServer.dir/TcpServer.cpp.o: ../TcpServer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/code/MyEchoServer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/EchoServer.dir/TcpServer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/EchoServer.dir/TcpServer.cpp.o -c /home/ubuntu/code/MyEchoServer/TcpServer.cpp

CMakeFiles/EchoServer.dir/TcpServer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EchoServer.dir/TcpServer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/code/MyEchoServer/TcpServer.cpp > CMakeFiles/EchoServer.dir/TcpServer.cpp.i

CMakeFiles/EchoServer.dir/TcpServer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EchoServer.dir/TcpServer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/code/MyEchoServer/TcpServer.cpp -o CMakeFiles/EchoServer.dir/TcpServer.cpp.s

CMakeFiles/EchoServer.dir/EchoServer.cpp.o: CMakeFiles/EchoServer.dir/flags.make
CMakeFiles/EchoServer.dir/EchoServer.cpp.o: ../EchoServer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/code/MyEchoServer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/EchoServer.dir/EchoServer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/EchoServer.dir/EchoServer.cpp.o -c /home/ubuntu/code/MyEchoServer/EchoServer.cpp

CMakeFiles/EchoServer.dir/EchoServer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EchoServer.dir/EchoServer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/code/MyEchoServer/EchoServer.cpp > CMakeFiles/EchoServer.dir/EchoServer.cpp.i

CMakeFiles/EchoServer.dir/EchoServer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EchoServer.dir/EchoServer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/code/MyEchoServer/EchoServer.cpp -o CMakeFiles/EchoServer.dir/EchoServer.cpp.s

CMakeFiles/EchoServer.dir/ThreadPool.cpp.o: CMakeFiles/EchoServer.dir/flags.make
CMakeFiles/EchoServer.dir/ThreadPool.cpp.o: ../ThreadPool.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/code/MyEchoServer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/EchoServer.dir/ThreadPool.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/EchoServer.dir/ThreadPool.cpp.o -c /home/ubuntu/code/MyEchoServer/ThreadPool.cpp

CMakeFiles/EchoServer.dir/ThreadPool.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EchoServer.dir/ThreadPool.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/code/MyEchoServer/ThreadPool.cpp > CMakeFiles/EchoServer.dir/ThreadPool.cpp.i

CMakeFiles/EchoServer.dir/ThreadPool.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EchoServer.dir/ThreadPool.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/code/MyEchoServer/ThreadPool.cpp -o CMakeFiles/EchoServer.dir/ThreadPool.cpp.s

CMakeFiles/EchoServer.dir/LogStream.cpp.o: CMakeFiles/EchoServer.dir/flags.make
CMakeFiles/EchoServer.dir/LogStream.cpp.o: ../LogStream.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/code/MyEchoServer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/EchoServer.dir/LogStream.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/EchoServer.dir/LogStream.cpp.o -c /home/ubuntu/code/MyEchoServer/LogStream.cpp

CMakeFiles/EchoServer.dir/LogStream.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EchoServer.dir/LogStream.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/code/MyEchoServer/LogStream.cpp > CMakeFiles/EchoServer.dir/LogStream.cpp.i

CMakeFiles/EchoServer.dir/LogStream.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EchoServer.dir/LogStream.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/code/MyEchoServer/LogStream.cpp -o CMakeFiles/EchoServer.dir/LogStream.cpp.s

CMakeFiles/EchoServer.dir/Logger.cpp.o: CMakeFiles/EchoServer.dir/flags.make
CMakeFiles/EchoServer.dir/Logger.cpp.o: ../Logger.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/code/MyEchoServer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/EchoServer.dir/Logger.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/EchoServer.dir/Logger.cpp.o -c /home/ubuntu/code/MyEchoServer/Logger.cpp

CMakeFiles/EchoServer.dir/Logger.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EchoServer.dir/Logger.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/code/MyEchoServer/Logger.cpp > CMakeFiles/EchoServer.dir/Logger.cpp.i

CMakeFiles/EchoServer.dir/Logger.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EchoServer.dir/Logger.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/code/MyEchoServer/Logger.cpp -o CMakeFiles/EchoServer.dir/Logger.cpp.s

CMakeFiles/EchoServer.dir/simpleTime.cpp.o: CMakeFiles/EchoServer.dir/flags.make
CMakeFiles/EchoServer.dir/simpleTime.cpp.o: ../simpleTime.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/code/MyEchoServer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building CXX object CMakeFiles/EchoServer.dir/simpleTime.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/EchoServer.dir/simpleTime.cpp.o -c /home/ubuntu/code/MyEchoServer/simpleTime.cpp

CMakeFiles/EchoServer.dir/simpleTime.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EchoServer.dir/simpleTime.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/code/MyEchoServer/simpleTime.cpp > CMakeFiles/EchoServer.dir/simpleTime.cpp.i

CMakeFiles/EchoServer.dir/simpleTime.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EchoServer.dir/simpleTime.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/code/MyEchoServer/simpleTime.cpp -o CMakeFiles/EchoServer.dir/simpleTime.cpp.s

# Object files for target EchoServer
EchoServer_OBJECTS = \
"CMakeFiles/EchoServer.dir/main.cpp.o" \
"CMakeFiles/EchoServer.dir/EventLoop.cpp.o" \
"CMakeFiles/EchoServer.dir/Poller.cpp.o" \
"CMakeFiles/EchoServer.dir/InetAddr.cpp.o" \
"CMakeFiles/EchoServer.dir/sockets.cpp.o" \
"CMakeFiles/EchoServer.dir/Socket.cpp.o" \
"CMakeFiles/EchoServer.dir/Channel.cpp.o" \
"CMakeFiles/EchoServer.dir/TcpConnection.cpp.o" \
"CMakeFiles/EchoServer.dir/Buffer.cpp.o" \
"CMakeFiles/EchoServer.dir/EpollPoller.cpp.o" \
"CMakeFiles/EchoServer.dir/Acceptor.cpp.o" \
"CMakeFiles/EchoServer.dir/TcpServer.cpp.o" \
"CMakeFiles/EchoServer.dir/EchoServer.cpp.o" \
"CMakeFiles/EchoServer.dir/ThreadPool.cpp.o" \
"CMakeFiles/EchoServer.dir/LogStream.cpp.o" \
"CMakeFiles/EchoServer.dir/Logger.cpp.o" \
"CMakeFiles/EchoServer.dir/simpleTime.cpp.o"

# External object files for target EchoServer
EchoServer_EXTERNAL_OBJECTS =

EchoServer: CMakeFiles/EchoServer.dir/main.cpp.o
EchoServer: CMakeFiles/EchoServer.dir/EventLoop.cpp.o
EchoServer: CMakeFiles/EchoServer.dir/Poller.cpp.o
EchoServer: CMakeFiles/EchoServer.dir/InetAddr.cpp.o
EchoServer: CMakeFiles/EchoServer.dir/sockets.cpp.o
EchoServer: CMakeFiles/EchoServer.dir/Socket.cpp.o
EchoServer: CMakeFiles/EchoServer.dir/Channel.cpp.o
EchoServer: CMakeFiles/EchoServer.dir/TcpConnection.cpp.o
EchoServer: CMakeFiles/EchoServer.dir/Buffer.cpp.o
EchoServer: CMakeFiles/EchoServer.dir/EpollPoller.cpp.o
EchoServer: CMakeFiles/EchoServer.dir/Acceptor.cpp.o
EchoServer: CMakeFiles/EchoServer.dir/TcpServer.cpp.o
EchoServer: CMakeFiles/EchoServer.dir/EchoServer.cpp.o
EchoServer: CMakeFiles/EchoServer.dir/ThreadPool.cpp.o
EchoServer: CMakeFiles/EchoServer.dir/LogStream.cpp.o
EchoServer: CMakeFiles/EchoServer.dir/Logger.cpp.o
EchoServer: CMakeFiles/EchoServer.dir/simpleTime.cpp.o
EchoServer: CMakeFiles/EchoServer.dir/build.make
EchoServer: CMakeFiles/EchoServer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ubuntu/code/MyEchoServer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Linking CXX executable EchoServer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/EchoServer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/EchoServer.dir/build: EchoServer

.PHONY : CMakeFiles/EchoServer.dir/build

CMakeFiles/EchoServer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/EchoServer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/EchoServer.dir/clean

CMakeFiles/EchoServer.dir/depend:
	cd /home/ubuntu/code/MyEchoServer/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/code/MyEchoServer /home/ubuntu/code/MyEchoServer /home/ubuntu/code/MyEchoServer/cmake-build-debug /home/ubuntu/code/MyEchoServer/cmake-build-debug /home/ubuntu/code/MyEchoServer/cmake-build-debug/CMakeFiles/EchoServer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/EchoServer.dir/depend

