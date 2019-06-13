//
// Created by WangRuning on 6/10/2019.
//

#include "ctype_example.h"
#include <ctype.h>
#include <stdio.h>

void test_ctype_header() {

  // 判断是否为十进制数字字符。
  printf("isdigit:\n");
  printf("a: %d\n", isdigit('a')); // 0
  printf("4: %d\n", isdigit('4')); // !0

  printf("\n");

  // 判断是否为除空格之外的可打印字符（可显示的）。
  printf("islower:\n");
  printf("\\t: %d\n", isgraph('\t')); // 0
  printf("b: %d\n", isgraph('b'));    // !0

  printf("\n");

  // 判断是否为小写字母。
  printf("islower:\n");
  printf("a is lower %d\n", islower('a')); // !0
  printf("B is lower %d\n", islower('B')); // 0
  printf("0 is lower %d\n", islower('0')); // 0

  printf("\n");

  // 判断是否为可打印字符（可显示的）。
  printf("isprint:\n");
  printf("space: %d\n", isprint(' '));// !0
  printf("\\r: %d\n", isprint('\r')); // 0
  printf("b: %d\n", isprint('b'));  // !0

  printf("\n");

  // 判断是否为标准空白字符。
  printf("isspace:\n");
  printf("space: %d\n", isspace(' '));
  printf("\\r: %d\n", isspace('\r'));
  printf("\\t: %d\n", isspace('\t'));
  printf("\\b: %d\n", isspace('\b')); // 0
  printf("\\n: %d\n", isspace('\n'));
  printf("\\f: %d\n", isspace('\f'));
  printf("\\v: %d\n", isspace('\v'));

  printf("\n");

  // 判断字符是否为大写字母。
  printf("isupper:\n");
  printf("D: %d\n", isupper('D')); // !0
  printf("x: %d\n", isupper('x')); // 0

  printf("\n");

  // 判断字符是否为 16 进制符号。
  printf("isxdigit:\n");
  printf("a: %d\n", isxdigit('a')); // !0
  printf("F: %d\n", isxdigit('F')); // !0
  printf("z: %d\n", isxdigit('z')); // 0
  printf("G: %d\n", isxdigit('G')); // 0

  printf("\n");

  // 将字符转化小写。
  printf("tolower:\n");
  char upperChar = 'Z';
  printf("lower char: %c\n", tolower(upperChar)); // z

  printf("\n");

  // 将字符转化大写。
  printf("toupper:\n");
  char lowerChar = 'a';
  printf("upper char: %c\n", toupper(lowerChar)); // A
}