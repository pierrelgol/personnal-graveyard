#include <stdio.h>

#define SIZE 10

int main(){

  int array[SIZE] = {1,2,3,4,5,6,7,8,9,10}, i, temp = array[0];
 
  for ( i = 0; i < SIZE; i++) {
    printf("array[%i] = %i\n",i,array[i]);
  }
  
  for ( i = 1; i < SIZE; ++i ) {
    array[i-1] = array[i];
  }
  array[SIZE-1] = temp;

  for ( i = 0; i < SIZE; i++) {
    printf("array[%i] = %i\n",i,array[i]);
  }


  return 0;
}
