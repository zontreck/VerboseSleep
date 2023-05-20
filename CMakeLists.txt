cmake_minimum_required(VERSION 3.25)
project(vsleep)

set(CMAKE_CXX_STANDARD 17)

add_executable(vsleep main.cpp)
install(TARGETS vsleep
        RUNTIME DESTINATION /usr/bin
        )