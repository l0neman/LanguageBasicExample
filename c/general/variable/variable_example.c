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

// ���Ա������塣
void test_variable_define()
{
    int v_binary  = 0b1001; // �����ơ�
    int v_octal   = 077;    // �˽��ơ�
    int v_decimal = 100;    // ʮ���ơ�
    int v_hex     = 0xa7;   // ʮ�����ơ�

    printf("%d", v_binary);
}