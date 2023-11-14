cmake_minimum_required(VERSION 3.17)
project(testproject)

set(CMAKE_CXX_STANDARD 14)

add_executable(testproject main.cpp person.h person.cpp date.h date.cpp time.h time.cpp  appointment.h appointment.cpp)
