#include <stdio.h>


void left_rotate(char* str, unsigned int n) {
  if(n) {
    for(int j=0; j<n; j++) {

      // count the length of array
      int index=0;
      while(*(str+index) != '\0') {
        index++;
      }
      // index = (length of array)-1

      // create pointer for iterating in the programme
      char* ptr = str;

      // copy first element in array
      char copy = *ptr;

      // shift every elemnt up to last element from '\0'
      for(int i=0; i<index-1; i++) {
        *(ptr+i) = *(ptr + i+1);
      }
      // put copied element in last position
      *(ptr + index-1) = copy;

    }
  }
}