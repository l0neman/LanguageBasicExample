set(CMAKE_C_STANDARD 99)

cmake_minimum_required(VERSION 3.13)

add_executable(c main.c
        assert/assert_test.c assert/assert_test.h)

add_executable(clib/main.c clib/ctype/ctype_example.c clib/ctype/ctype_example.h)

project(c C)

set(CMAKE_C_STANDARD 11)


