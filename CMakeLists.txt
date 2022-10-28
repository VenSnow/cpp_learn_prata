cmake_minimum_required(VERSION 3.19)
project(prata)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(lesson1)

add_executable(prata
        lesson1/task_3.cpp)
