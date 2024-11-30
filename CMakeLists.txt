cmake_minimum_required(VERSION 3.22)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAG} -fno-omit-frame-pointer -fsanitize=leak -g ")
add_executable(Task Task_3.cpp)