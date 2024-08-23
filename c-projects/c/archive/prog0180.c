#include <stdio.h>

int main(){

  int array[10] = {0,6,9,5,4,3,2,7,0,0};
  int max = array[0], min = array[0], i;

  for ( i = 0; i < 10; ++i ) {
    max = (array[i] > max ? array[i] : max);
    min = (array[i] < min ? array[i] : min);
  }

  for ( i = 0; i < 10; ++i ) {
    printf("Array[%i] = %i\n",i,array[i]);
  }

  printf("The maximum value in this array is %i\n",max);
  printf("The minimum value in this array is %i\n",min);
  printf("\n");
  
  return 0;
}
