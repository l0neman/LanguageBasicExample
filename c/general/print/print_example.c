#include "print_example.h"

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

// 以二进制形式打印。
void print_binary(const int n, const int bit)
{
    int size = sizeof(char) * bit + 1;
    char* buffer = malloc(size);
    if (buffer == NULL) {
        printf("%d to binary error.\n", n);
        return;
    }

    memset(buffer, 0, size);
    itoa(n, buffer, 2);
    printf("%s\n", buffer);
    // TODO: 前面填充 0。
    free(buffer);
}

// 扩展打印。
void print_extensions()
{
    uint16_t a = 38;
    print_binary(a, 16);
}

// 测试标准输出。
void test_print()
{
    printf("int 十进制：%d\n", 12);  // 12.
    printf("int 十进制：%i\n", 12);  // 12.
    printf("uint 十进制：%u\n", 12); // 12.

    printf("uint 八进制：%o\n", 18);  // 22.
    printf("uint 八进制：%o\n", 077); // 077.

    printf("uint 十六进制：%x\n", 26);   // 1a.
    printf("uint 十六进制：%X\n", 0x66); // 66.

    printf("int 单字符：%c\n", 'x'); // x.
    printf("int 单字符：%c\n", 56);  // 8.

    // 遇到 '\0' 或指定精度的字符数结束。
    printf("char* 字符串：%s\n", "Hello World!");
    printf("char* 字符串限制 5 字符：%.5s\n", "Hello World!");

    printf("print extensions:\n");
    print_extensions();

    // TODO: 其他类型。
}