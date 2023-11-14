cmake_minimum_required(VERSION 3.17)
project(association)

set(CMAKE_CXX_STANDARD 14)

add_executable(association main.cpp person.h person.cpp car.h car.cpp mobile.h mobile.cpp laptop.cpp)
