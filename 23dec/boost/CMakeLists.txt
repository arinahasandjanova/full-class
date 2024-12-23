cmake_minimum_required(VERSION 3.10)
project(boost)

set(CMAKE_CXX_STANDARD 20)

FIND_PACKAGE(Boost 1.83.0 COMPONENTS program_options REQUIRED)

add_executable(boost_test main.cpp)

add_executable(boost_test2 main2.cpp)

TARGET_LINK_LIBRARIES(boost_test2 PUBLIC Boost::boost)

TARGET_LINK_LIBRARIES(boost_test PUBLIC Boost::program_options)