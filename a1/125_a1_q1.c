#include <stdio.h>


int concat_ints(int n1, int n2) {
  int digit=0;
  int zeros=1;

  int num1 = n1;// local
  int num2 = n2;// local
  // printf("num1: %d\nnum2: %d\n", num1, num2);

  int count = num2;// local

  // count digits of second number
  while(count!=0) {
    count = count / 10;
    ++digit;
  }

  // shift value of num1 "count" digits to left
  for(int i=0; i<digit; i++) {
    zeros *= 10;
  }

  // add shifted num1 and num2
  int res = num1*zeros + num2;

  return res;
}