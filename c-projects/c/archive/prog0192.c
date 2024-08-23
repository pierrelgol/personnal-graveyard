#include <stdio.h>

#define SIZE 10

int main(){

  int array[SIZE] = {0,1,2,3,4,5,6,7,8,9}, i, temp;
 
  int offset = 2;

  for ( i = 0; i < SIZE; i++) {
    printf("%2i, ",array[i]);
  }
  

  temp = array[0];
  for ( i = offset ; (i+offset) < (SIZE+offset); ++i ) {
    array[i-offset] = array[i];
    printf("%i",i%SIZE);
  }
  array[SIZE-1] = temp;

  printf("\n");


  for ( i = 0; i < SIZE; i++) {
    printf("%2i, ",array[i]);
  }

  printf("\n");


  return 0;
}
