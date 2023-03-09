cmake_minimum_required(VERSION 3.3.2)
project(ServerJk)

set(CMAKE_CXX_STANDARD 11)

# ADD DLL-PATH
link_directories(/usr/lib64/mysql)

# 设置静态库的输出目录
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# 设置动态库的输出目录
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/dll)

# 不是必须的
include_directories(./MyHeader)

add_library(common_lib STATIC
    ./Protobuf/MessageProto.pb.cc

    ./Tool/Epoll.cpp 
    ./Tool/FunctionUtil.cpp 
    ./Tool/RingBuffer.cpp 
    ./Tool/Server.cpp 
)

set(libraries_to_link
    protobuf
    pthread
    mysqlclient
    hiredis
    common_lib
)

add_executable(GateServer
    ./Server/GateServer/GateServer.cpp 
)

target_link_libraries(GateServer ${libraries_to_link})
