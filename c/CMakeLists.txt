cmake_minimum_required(VERSION 3.13)
project(c C)

set(CMAKE_C_STANDARD 11)

add_executable(c clib/main.c clib/ctype/ctype_example.c clib/ctype/ctype_example.h)