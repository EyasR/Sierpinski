cmake_minimum_required(VERSION 3.13)
project(Lab3_Part2_EyasRashid)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Lab3_Part2_EyasRashid
        driver.cpp
        Sierpinski.cpp
        Sierpinski.h
        Turtle.cpp
        Turtle.h)
