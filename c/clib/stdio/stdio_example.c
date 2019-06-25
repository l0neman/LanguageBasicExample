//
// Created by WangRuning on 6/24/2019.
//

#include "stdio_example.h"
#include <stdio.h>

// remove - 移除文件。
int test_remove() {
  if (remove("../res/clib_file/stdio/1.txt") == 0) {
    printf("remove ok.");
  }

  return 0;
}

// rename - 重命名文件。
int test_rename() {
  if (rename("../res/clib_file/stdio/1.txt", "../res/clib_file/stdio/2.txt") == 0) {
    printf("rename ok.");
  }

  return 0;
}

// tmpfile - 创建一个 wb+ 模式的临时文件，在 close 后消失。
int test_tmpfile() {
  FILE *tmpFile = tmpfile();
  if (tmpFile != NULL) {
    printf("create tmp file ok.");
  }

  getchar();
  fclose(tmpFile);
  return 0;
}

// fflush
int test_fflush() {
  return 0;
}

// fopen - 打开文件。
int test_fopen() {
  FILE *open = fopen("../res/clib_file/stdio/1.txt", "wb");
  if (open != NULL) {
    printf("open file ok.");
  }

  fclose(open);
  return 0;
}


int test_stdio_header() {
  test_remove();
  test_rename();
  test_tmpfile();
  test_fflush();
  test_fopen();

  // todo filling test.
  return 0;
}