cmake_minimum_required(VERSION 3.20)
project(MyProject)

set(CMAKE_CXX_STANDARD 17)

add_executable(MyProject main.cpp f1.h f2.h f3.h f1.cpp f2.cpp f3.cpp f4.h f4.cpp)
