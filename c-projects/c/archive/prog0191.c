#include <stdio.h>

#define SIZE 10

int main(){

  int array[SIZE] = {0,1,2,3,4,5,6,7,8,9}, i, temp, offset;
  
  for ( i = 0; i < SIZE; i++) {
    printf("array[%i] = %i\n",i,array[i]);
  }
 
  printf("Enter left Offset :\n");
  scanf("%i",&offset);

  if (offset >= SIZE) {
    offset = offset % SIZE;
  }
  
  if (offset == 0) {
    for ( i = 0; i < SIZE; i++) {
      printf("array[%i] = %i\n",i,array[i]);
    }
  }
  if (offset >= 1 && offset < SIZE) {
    while (offset != 0) {
      temp = array[0]; 
      
      for ( i = 1; i < SIZE; ++i ) {
        array[i-1] = array[i];
      }
      array[SIZE-1] = temp;
      offset--;
    }
  }

  for ( i = 0; i < SIZE; i++) {
    printf("array[%i] = %i\n",i,array[i]);
  }
  return 0;
}
