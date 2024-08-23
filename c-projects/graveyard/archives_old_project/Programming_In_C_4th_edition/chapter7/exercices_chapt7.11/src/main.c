/*
 *
 *   Title of project : 
 *   Date of creation : 
 *   Author(s) : PierreLgol
 *   github : https://github.com/pierrelgol
 * 
 *   More on the project :
 *   
 *   #TODO(s) :  
 * 
 *
 */

//--------------------[     DEPENDENCIES DECLARATION     ]--------------------//

#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

//--------------------[     MAIN METHOD     ]--------------------------------//

int64_t arraySum( int *arr, size_t size){
 int64_t sum = 0;
 int* end = arr+size;
 for( ; arr < end; arr++ ){
  sum += *arr;
 }
 return sum;
}

int main()
{
 int *arr = (int*)malloc(sizeof(int) * 10);

 for(int i = 0; i < 10; i++){
  arr[i] = i;
 }

 printf("the sum of arr is %li\n",arraySum(arr,10));
 free(arr);
return EXIT_SUCCESS;
}
