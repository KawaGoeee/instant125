#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// implement functions here and define it in each individual c-programme(create c file)!!
#include "funcs.h"


int main(void) {

  // test1---------------------
  char* str2 = "1";
  char* str1 = "1999";
  // output == "2000"


  // test2---------------------
  // char* str1 = "123530124";
  // char* str2 = "981252430004";
  // output == "981375960128"


  char* sum = str_compute_sum(str1, str2);

  for(int i=0; i<5; i++) {
    printf("%c", sum[i]);
  }
  printf("\n");

  if (sum && strcmp(sum, "2000") == 0)  { // checks sum != NULL and the value is correct
    printf("Q5-2 ok\n");
    free(sum);
  }
  else  {
    printf("Q5-2 ERROR\n");
    free(sum);
  }

  return 0;
}
