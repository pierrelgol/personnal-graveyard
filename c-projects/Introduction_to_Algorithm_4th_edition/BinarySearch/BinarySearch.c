#include "BinarySearch.h"
#include <stddef.h>

int BinarySearch(Data_t *data, Data_t value, size_t size) {
  int low = 0;
  int high = size - 1;
  int mid = 0;

  while ( low <= high ){
    mid = low + ( high - low ) / 2;

    if ( data[mid] == value){
      return mid;
    } else if ( data[mid] < value ){
      low = mid + 1;
    }else{
      high = mid - 1;
    }
  }
  return -1;
}
