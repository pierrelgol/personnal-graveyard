#include <stdio.h>

void CopyArray(int *SourceArray,int *TargetArray, int SIZE);


void CopyArray(int *SourceArray,int *TargetArray,int SIZE){

  for ( int i = 0; i < SIZE; i++ ){
    TargetArray[i] = SourceArray[i]; 
  }

}


#define SIZE 3
int main(){

  int date[SIZE] = {27,02,2000}, date_copy[SIZE], i; 
  int *ptr_date = date, *ptr_CopyArray = date_copy;

  CopyArray(ptr_date, ptr_CopyArray, SIZE);

  for ( i = 0; i < SIZE; ++i ) {
    printf("date[%i] = %d\n",i,date[i]);
    printf("date_copy[%i] = %d\n",i,date_copy[i]);
  }

  return 0;
}
