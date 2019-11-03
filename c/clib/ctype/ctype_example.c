//
// Created by l0neman on 6/10/2019.
//

#include "ctype_example.h"
#include <ctype.h>
#include <stdio.h>

// isdigit - 判断是否为十进制数字字符。
int test_isdigit() {
  printf("isdigit:\n");
  printf("a: %d\n", isdigit('a')); // 0
  printf("4: %d\n", isdigit('4')); // !0

  printf("\n");

  return 0;
}

// isgraph - 判断是否为除空格之外的可打印字符（可显示的）。
int test_isgraph() {
  printf("islower:\n");
  printf("\\t: %d\n", isgraph('\t')); // 0
  printf("b: %d\n", isgraph('b'));    // !0

  printf("\n");
  return 0;
}

// islower - 判断是否为小写字母。
int test_islower() {
  printf("islower:\n");
  printf("a is lower %d\n", islower('a')); // !0
  printf("B is lower %d\n", islower('B')); // 0
  printf("0 is lower %d\n", islower('0')); // 0

  printf("\n");
  return 0;
}

// isprint - 判断是否为可打印字符（可显示的）。
int test_isprint() {
  printf("isprint:\n");
  printf("space: %d\n", isprint(' '));// !0
  printf("\\r: %d\n", isprint('\r')); // 0
  printf("b: %d\n", isprint('b'));  // !0

  printf("\n");
  return 0;
}

// isspace - 判断是否为标准空白字符。
int test_isspace() {
  printf("isspace:\n");
  printf("space: %d\n", isspace(' '));
  printf("\\r: %d\n", isspace('\r'));
  printf("\\t: %d\n", isspace('\t'));
  printf("\\b: %d\n", isspace('\b')); // 0
  printf("\\n: %d\n", isspace('\n'));
  printf("\\f: %d\n", isspace('\f'));
  printf("\\v: %d\n", isspace('\v'));

  printf("\n");
  return 0;
}

// isupper - 判断字符是否为大写字母。
int test_isupper() {
  printf("isupper:\n");
  printf("D: %d\n", isupper('D')); // !0
  printf("x: %d\n", isupper('x')); // 0

  printf("\n");
  return 0;
}

// isxdigit - 判断字符是否为 16 进制符号。
int test_isxdigit() {
  printf("isxdigit:\n");
  printf("a: %d\n", isxdigit('a')); // !0
  printf("F: %d\n", isxdigit('F')); // !0
  printf("z: %d\n", isxdigit('z')); // 0
  printf("G: %d\n", isxdigit('G')); // 0

  printf("\n");
  return 0;
}

// tolower - 将字符转化小写。
int test_tolower() {
  printf("tolower:\n");
  char upperChar = 'Z';
  printf("lower char: %c\n", tolower(upperChar)); // z

  printf("\n");
  return 0;
}

// toupper - 将字符转化大写。
int test_toupper() {
  printf("toupper:\n");
  char lowerChar = 'a';
  printf("upper char: %c\n", toupper(lowerChar)); // A
  return 0;
}


int test_ctype_header() {
  // todo_补充其他几个函数用法，暂时用不到，先不补了。

  test_isdigit();
  test_isgraph();
  test_islower();
  test_isprint();
  test_isspace();
  test_isupper();
  test_isxdigit();
  test_tolower();
  test_toupper();

  return -1;
}