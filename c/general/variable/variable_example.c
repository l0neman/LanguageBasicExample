#include "variable_example.h"
#include <stdio.h>
#include <stdint.h>

#define u1 uint8_t;
#define u2 uint16_t;
#define u4 uint32_t;
#define u8 uint64_t;
#define s1 int8_t;
#define s2 int16_t;
#define s4 int32_t;
#define s8 int64_t;

// 测试变量定义。
void test_variable_define()
{
    int v_binary  = 0b1001; // 二进制。
    int v_octal   = 077;    // 八进制。
    int v_decimal = 100;    // 十进制。
    int v_hex     = 0xa7;   // 十六进制。

    printf("%d", v_binary);
}