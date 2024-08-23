#include "BubbleSort.h"
#include <stddef.h>
#include <stdint.h>

extern void BubbleSort(Data_t *data, const size_t *size, const Order *order) {

  if (*order == increasing) {
    for (size_t i = 0; i < *size; i++) {

      for (size_t j = *size - 1; j > (i + 1); j--) {

        if (data[j] < data[j - 1]) {
          Data_t temp = data[j];
          data[j] = data[j - 1];
          data[j - 1] = temp;
        }
      }
    }
  } else {

    for (size_t i = 0; i < *size; i++) {

      for (size_t j = *size - 1; j > (i + 1); j--) {

        if (data[j] > data[j - 1]) {
          Data_t temp = data[j];
          data[j] = data[j - 1];
          data[j - 1] = temp;
        }
      }
    }
  }
}