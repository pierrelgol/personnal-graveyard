#include "MergeSort.h"
#include <stddef.h>

extern void MergeSort(Data_t *data, size_t start, size_t size){
  if(start >= size){
    return;
  }
  size_t mid = ( start + size ) / 2;
  MergeSort(data,start,mid); 
  MergeSort(data,(mid + 1),size);
  Merge(data,start,mid,size); 
}

static void Merge(Data_t *data, size_t start, size_t mid, size_t size){
  size_t l_len = mid  - start + 1;
  size_t r_len = size - mid;
  size_t i, j, k;
  Data_t left[l_len], right[r_len];
  for ( i = 0; i < l_len ; i++ ){
    left[i] = data[start + i];
  }
  for ( j = 0 ; j < r_len ; j++ ){
    right[j] = data[mid + 1 + j];
  }
  i = 0;
  j = 0;
  k = start;
  while ( i < l_len && j < r_len ){
    if(left[i] <= right[j]){
      data[k] = left[i++];
    }else{
      data[k] = right[j++];
    }
    k++;
  }
  while( i < l_len ){
    data[k++] = left[i++];
  }
  while( j < r_len ){
    data[k++] = right[j++];
  }
}