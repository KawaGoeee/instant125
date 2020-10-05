#include <stdio.h>

void upper2lowercase(char* c) {
  char ch = *c;
  // printf("%c\n", ch);
  // printf("%c\n", *c);

  if(ch>=65 && ch<=90) {// A-Z: 65-90 by ASCII code
    ch = ch+32;
    *c = ch;
  }
}