cmake_minimum_required(VERSION 3.10)
project(daje_ukazateli_umnie)

set(CMAKE_CXX_STANDARD 20)

add_executable(daje_ukazateli_umnie main.cpp
        problem.cpp
        shared.cpp)
