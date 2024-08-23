#include <stdio.h>

 void PrintLargestNeighborsSum(int array[]);
 void PrintSortingTypeOfArray(int array[]);

#define SIZE 5

int main(){

  int array[SIZE] = {0}, i;
  for ( i = 0; i < SIZE; ++i ) {
    printf("Enter number %i :\n",i);
    scanf("%i",&array[i]);
  }
  PrintLargestNeighborsSum(array);
  PrintSortingTypeOfArray(array);
  return 0;
}

void PrintLargestNeighborsSum(int array[]) {
  int LNSum = 0, i;
  for (i = 1; i < SIZE; ++i) {
    LNSum = (array[i] + array[i - 1]) > LNSum ? array[i] + array[i - 1] : LNSum;
  }
  printf("The largest neighbors sum is %i\n",LNSum);
}

void PrintSortingTypeOfArray(int array[]){
  int flag_Ascending = 1, flag_Descending = 1, flag_kindaSorted = 0;
  for ( int i = 1; i < SIZE; ++i ) {
    if (array[i] == array [i-1]) {
      flag_kindaSorted = 1;
    }
    if (array[i] > array[i-1]) {
        flag_Descending = 0;      
    }
    if (array[i] < array[i-1]) {
        flag_Ascending = 0;
    }
  }
  if (flag_Ascending == 1 && flag_kindaSorted == 0) {
    printf("Array is sorted from smallest to largest\n");
  }
  if (flag_Descending == 1 && flag_kindaSorted == 0) {
    printf("Array is sorted from largest to smallest\n");
  }
  if (flag_Ascending != 1 && flag_Ascending != 1) {
    printf("Arrays is not sorted\n");
  }
  if (flag_kindaSorted == 1) {
    printf("Array is kind of sorted\n");
  }

}
