cmake_minimum_required(VERSION 3.10)
project(boost)

set(CMAKE_CXX_STANDARD 20)

FIND_PACKAGE(Boost 1.83.0  REQUIRED)

add_executable(boost_test main.cpp)
add_executable(boost_test2 main2.cpp)
add_executable(boost_test3 25dec.cpp)
add_executable(boost_test4 new25dec.cpp)
add_executable(boost_test5 thenewest25dec.cpp)

TARGET_LINK_LIBRARIES(boost_test5 PUBLIC Boost::boost)

TARGET_LINK_LIBRARIES(boost_test4 PUBLIC Boost::boost)

TARGET_LINK_LIBRARIES(boost_test3 PUBLIC Boost::boost)

TARGET_LINK_LIBRARIES(boost_test2 PUBLIC Boost::boost)

TARGET_LINK_LIBRARIES(boost_test PUBLIC Boost::boost)