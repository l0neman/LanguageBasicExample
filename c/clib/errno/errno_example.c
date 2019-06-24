//
// Created by WangRuning on 6/24/2019.
//

#include "errno_example.h"
#include <errno.h>
#include <stdio.h>

int test_errno_header() {
  // style 1.
  errno_t my_error_code1 = 4;
  *_errno() = my_error_code1;
  printf("error code 1 %d", errno);

  printf("\n");

  //style 2.
  errno_t my_error_code2 = 5;
  *_errno() = my_error_code2;
  printf("error code 2 %d", errno);
  return 0;
}