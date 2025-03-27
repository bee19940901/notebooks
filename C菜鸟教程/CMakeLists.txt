cmake_minimum_required(VERSION 3.24)
project(C C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(C
        add_two_numbers.c
        add_two_numbers.h
        chapter1.c
        chapter2.c
        chapter3.c
        chapter4.c
        chapter4.h
        chapter5.c
        chapter5.h
        chapter6.c
        chapter6.h
        chapter7.c
        chapter7.h
        chapter8.c
        chapter8.h
        main.c
        test10.c
        test10.h
        test11.c
        test11.h
        test9.c
        test9.h
        test12.c
        test12.h
        tests.h
        test15.c
        strsplit.c
        strsplit.h
        cut_fastq.c
        cut_fastq.h
        test13.c
        test13.h
        utils.h test16.c test17.c)
