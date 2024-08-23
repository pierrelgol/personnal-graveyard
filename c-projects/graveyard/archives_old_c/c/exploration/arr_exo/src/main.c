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
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

int freqAsValue(const int *arr, const size_t size, const int k, ...);
int *createArr(const size_t size, const int mval, const int Mval);
int findDominantValue(const int *arr, const size_t size);

//--------------------[     MAIN METHOD     ]--------------------------------//

int main() {

  int arr[14] = {1, 2, 3, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
  int *p = arr;
  int size = 14;
  int result = findDominantValue(p, size);
  printf("Dominant value: %d\n", result);

  return EXIT_SUCCESS;
}

int freqAsValue(const int *arr, const size_t size, const int k, ...) {
  if (!arr)
    return -1;
  int count = 0;
  size_t i = 0;

  while (i < size) {
    if (arr[i] == k)
      count++;
    i++;
  }

  return (count == k);
}

int *createArr(const size_t size, const int mval, const int Mval) {
  int *res;
  if (size == 0)
    return NULL;

  res = (int *)malloc(sizeof(int) * size);
  if (!res)
    return NULL;

  size_t i;

  for (i = 0; i < size; i++) {
    res[i] = (int)(rand() % (Mval - mval + 1)) + mval;
  }
  return res;
}

int findDominantValue(const int *arr, const size_t size) {
  if (!arr || size == 0) return -1;

  int *count_arr = (int*)(calloc(size+1,sizeof(int)));
  if ( !count_arr ) return -2;

  for ( const int *p = arr; p < &arr[size]; p++ ){
    count_arr[*p]++;
  }
  
  for ( const int *p = arr; p < &arr[size]; p++ ){
    if( count_arr[*p] > size/2){
      free(count_arr);
      return *p;
    }
  }
  return -1;
}

int findSpecificValueMaxSum(const int *arr, const size_t size) {
  if (!arr || size == 0) return -1;

  int *count_arr = (int*)(calloc(size+1,sizeof(int)));
  if ( !count_arr ) return -2;
  
  for ( const int *p = arr; p < &arr[size]; p++ ){
    count_arr[*p]++;
  }
  int max_sum = 0;
  size_t i = 0;
  for ( ; i < (size+1); i++ ){
    if(max_sum < (count_arr[i] * count_arr[i])){
      max_sum = i;
    }
  }
  return i;
}
