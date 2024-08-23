#include <stdio.h>

int IndexOf(int value, int array[],int lengthOfArray);


int main(){

  int array[10] = {0,6,9,5,4,3,2,7,0,0};
  int max = array[0], min = array[0], i;
  int maxIndex, minIndex;
  for ( i = 0; i < 10; ++i ) {
    max = (array[i] > max ? array[i] : max);
    min = (array[i] < min ? array[i] : min);
  }

  maxIndex = IndexOf(max, array, 10);
  minIndex = IndexOf(min, array, 10);

  for ( i = 0; i < 10; ++i ) {
    printf("Array[%i] = %i\n",i,array[i]);
  }

  printf("The maximum value in this array is %i and max is in %ith position in the array\n",max,maxIndex);
  printf("The minimum value in this array is %i and min is in %ith position in the array\n",min,minIndex);
  printf("\n");
  
  return 0;
}


int IndexOf(int value, int array[], int lengthOfArray){
  for ( int i = 0; i < lengthOfArray; ++i ) {
    if (value == array[i])
      return i;
  }
  return -1;
}
