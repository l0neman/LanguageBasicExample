//
// Created by WangRuning on 6/10/2019.
//

#include "ctype_example.h"
#include <ctype.h>
#include <stdio.h>

void test_ctype_header() {

  // 判断是否为标准空白字符。
  printf("\\n: %d\n", isspace(' '));
  printf("\\r: %d\n", isspace('\r'));
  printf("\\t: %d\n", isspace('\t'));
  printf("\\b: %d\n", isspace('\b')); // 0
  printf("\\n: %d\n", isspace('\n'));
  printf("\\f: %d\n", isspace('\f'));
  printf("\\v: %d\n", isspace('\v'));

  // 判断字符是否为大小字母。
  printf("D: %d\n", isupper('D')); // != 0
  printf("x: %d\n", isupper('x')); // 0

  // 判断字符是否为 16 进制符号。
  printf("a: %d\n", isxdigit('a')); // != 0
  printf("F: %d\n", isxdigit('F')); // != 0
  printf("z: %d\n", isxdigit('z')); // 0
  printf("G: %d\n", isxdigit('G')); // 0

  // 将字符转化小写。
  char upperChar = 'Z';
  printf("lower char: %c\n", tolower(upperChar)); // z

  // 将字符转化大写。
  char lowerChar = 'a';
  printf("upper char: %c\n", toupper(lowerChar)); // A
}