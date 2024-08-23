#include "InsertionSort.h"
#include <stddef.h>

extern void InsertionSort(Data_t *data, const size_t *size, Order *order) {
  Data_t *end = data + *size;
  Data_t *iterator = data + 1;
  Data_t temp = 0;
  if (*order == increasing) {
    for (; iterator < end; ++iterator) {
      while (*(iterator - 1) > *iterator && iterator > data) {
        temp = *iterator;
        *iterator = *(iterator - 1);
        *(iterator - 1) = temp;
        --iterator;
      }
    }
  } else {
    for (; iterator < end; ++iterator) {
      while (*(iterator - 1) < *iterator && iterator > data) {
        temp = *iterator;
        *iterator = *(iterator - 1);
        *(iterator - 1) = temp;
        --iterator;
      }
    }
  }
}