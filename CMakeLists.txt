cmake_minimum_required(VERSION 3.12)
project(genRefac2)

set(CMAKE_CXX_STANDARD 11)

add_executable(genRefac2 main.cpp Customer.cpp Customer.h Movie.cpp Movie.h Rental.h)