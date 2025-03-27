cmake_minimum_required(VERSION 3.25)
project(C C)

set(CMAKE_C_STANDARD 11)

add_executable(C main.c test1.c tests.h test2.c)
