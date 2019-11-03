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

// fclose - 清空 FILE* 指向的流，并将流中缓冲区写入文件。
int test_fclose() {
  FILE *file = fopen("../res/clib_file/stdio/1.txt", "w");
  if (fclose(file) == EOF) {
    printf("close error.");
  }

  return 0;
}

// fflush - 将流中未写入的数据写入文件。
int test_fflush() {
  FILE *file = fopen("../res/clib_file/stdio/1.txt", "w");
  fwrite(&"1234", 5, 1, file);
  fflush(file);
  fclose(file);
  return 0;
}

// fopen - 打开文件。
int test_fopen() {
  FILE *open = fopen("../res/clib_file/stdio/1.txt", "w");
  if (open != NULL) {
    printf("open file ok.");
  }

  fclose(open);
  return 0;
}

// freopen - 首先尝试关闭和指定流关联的文件，然后将 filename 指定文件
// 和 FILE* 指向的流关联。
int test_freopen() {
  FILE *open = fopen("../res/clib_file/stdio/1.txt", "w");
  fwrite(&"11", 2, 1, open);

  FILE *f2 = freopen("../res/clib_file/stdio/2.txt", "w", open);
  if (f2 == NULL) {
    printf("f2 open error.");
    return -1;
  }

  fwrite(&"22", 2, 1, f2);
  fclose(f2);
}

int test_stdio_header() {
  /*
  test_remove();
  test_rename();
  test_tmpfile();
  test_fclose();
  test_fflush();
  test_fopen();
  test_freopen();
  // */

  // todo filling test.
  return 0;
}