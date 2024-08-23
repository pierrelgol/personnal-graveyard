#include <stdio.h>

void CountNonUniqueElementInArray(int array[]);

#define SIZE 10

/*
* {0,1,2,3,4,5,6,7,8,9} --> all displayed no repetition.
* {0,1,1,2,3,4,5,5,6,7} --> two repetion
*/

int main(){

  int array[SIZE] ={5,7,3,4,5,6,8,9,10,3}; 
  CountNonUniqueElementInArray(array);
  
  return 0;
}
  void CountNonUniqueElementInArray(int array[]){
   int i, j, count = 0;  
   int duplicated_numbers_flag[SIZE] = {0};
   for ( i = 0; i < SIZE; ++i ) {
     for ( j = i+1; j < SIZE; ++j ) {
      if (array[i] == array[j] && j != i) {
        duplicated_numbers_flag[i] = 1;
        printf("j = %i\n",j);
        break;
      }
     }
   }

  for ( i = 0; i < SIZE; ++i ) {
    if (duplicated_numbers_flag[i] == 1) {
      count++;
    }else {
      printf("%3i, ",array[i]);
    }
  }
  printf("\n");
  printf("There is %i non unique numbers\n",count);

}
