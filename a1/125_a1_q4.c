#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


bool contains_equal_columns(int height, int width, const int array[height][width]) {
  bool res;
  int count=0;// increment when a column is same

  // interation[i]: width(column)
  for(int i=0; i<width; i++) {
    // iteration[k]: column to compare with column[i]
    for(int k=i+1; k<width; k++) {
      // iteration[j]: height(row)
      for(int j=0; j<height; j++) {
        // compare element in column[i] and column[k]
        if(array[j][i] != array[j][k]) {
          break;
        }
        if(j==height-1) {
          count++;
        }
      }
    }
  }
  // if no columns are the same, res=false
  if(count==0) {
    res = false;
  }else {
    res = true;
  }
  return res;
}