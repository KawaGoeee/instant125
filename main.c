#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// implement functions here and define it in each individual c-programme(create c file)!!
#include "funcs.h"


int main(void) {

  // char* str1 = "1999";
  // char* str2 = "1";
  char* str1 = "123530124";
  char* str2 = "981252430004";
  char* sum = str_compute_sum(str1, str2);

  // for(int i=0; i<12; i++) {
  //   printf("%c", sum[i]);
  // }
  // printf("\n");

  if (sum && strcmp(sum, "981375960128") == 0)  { // checks sum != NULL and the value is correct
    printf("Q5-2 ok\n");
    free(sum);
    // sum=NULL;
    return true;
  }
  else  {
    printf("Q5-2 ERROR\n");
    free(sum);
    // sum=NULL;
    return false;
  }
  
  return 0;
}
