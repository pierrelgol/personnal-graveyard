#include "param_lib.h"
#include <stddef.h>
#include <stdint.h>

extern void MergeSort(Data_t *data, size_t start, size_t size);
static void Merge(Data_t *data, size_t start, size_t mid, size_t size);
