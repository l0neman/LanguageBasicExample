set(CMAKE_C_STANDARD 99)

cmake_minimum_required(VERSION 3.13)

add_executable(
        c
        main.c
        clib/main_clib.c
        clib/main_clib.h
        clib/assert/assert_example.c
        clib/assert/assert_example.h
        clib/ctype/ctype_example.c
        clib/ctype/ctype_example.h
		clib/stdio/stdio_example.c
        clib/stdio/stdio_example.h
        clib/errno/errno_example.c
        clib/errno/errno_example.h
		general/main_general.c
		general/main_general.h
		general/print/print_example.c
		general/print/print_example.h
		general/variable/variable_example.c
		general/variable/variable_example.h
        
)

project(c C)

set(CMAKE_C_STANDARD 11)


