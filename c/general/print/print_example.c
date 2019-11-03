#include "print_example.h"

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

// �Զ�������ʽ��ӡ��
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
    // TODO: ǰ����� 0��
    free(buffer);
}

// ��չ��ӡ��
void print_extensions()
{
    uint16_t a = 38;
    print_binary(a, 16);
}

// ���Ա�׼�����
void test_print()
{
    printf("int ʮ���ƣ�%d\n", 12);  // 12.
    printf("int ʮ���ƣ�%i\n", 12);  // 12.
    printf("uint ʮ���ƣ�%u\n", 12); // 12.

    printf("uint �˽��ƣ�%o\n", 18);  // 22.
    printf("uint �˽��ƣ�%o\n", 077); // 077.

    printf("uint ʮ�����ƣ�%x\n", 26);   // 1a.
    printf("uint ʮ�����ƣ�%X\n", 0x66); // 66.

    printf("int ���ַ���%c\n", 'x'); // x.
    printf("int ���ַ���%c\n", 56);  // 8.

    // ���� '\0' ��ָ�����ȵ��ַ���������
    printf("char* �ַ�����%s\n", "Hello World!");
    printf("char* �ַ������� 5 �ַ���%.5s\n", "Hello World!");

    printf("print extensions:\n");
    print_extensions();

    // TODO: �������͡�
}