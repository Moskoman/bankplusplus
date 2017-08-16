cmake_minimum_required (VERSION 2.6)
project (BANK)

add_definitions(-std=c++11)

add_executable(Bank
    src/main.cpp
    src/Account.h
    )
target_link_libraries(Bank)
