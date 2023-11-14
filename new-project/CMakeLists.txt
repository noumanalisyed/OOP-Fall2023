cmake_minimum_required(VERSION 3.25)
project(new_project)

set(CMAKE_CXX_STANDARD 17)

add_executable(new_project
        main.cpp
        MerkelMain.cpp
        CSVReader.cpp,
        OrderBook.cpp,
        OrderBookEntry.cpp,
        Wallet.cpp
        OrderBook.cpp)
