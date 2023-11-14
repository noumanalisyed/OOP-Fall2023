cmake_minimum_required(VERSION 3.17)
project(product)

set(CMAKE_CXX_STANDARD 14)

add_executable(product product.cpp productdetail.cpp main.cpp)
