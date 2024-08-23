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

//--------------------[     MAIN METHOD     ]--------------------------------//

typedef enum { INCREASING, DECREASING } Order;

typedef void (*pfuncSort_t)(int *, size_t *);

void sortIncreasing(int *arr, size_t *size) {
  if (*size == 0)return;

  const int *end = (arr + (*size));
  int *i = arr + 1, *temp;
  for ( ; i < end; ++i ) {
    while ( *i < *(i - 1) && i > arr ) {
      *temp = *i;
      *i = *(i - 1);
      *(i - 1) = *temp;
      --i;
    }
  }
  
}

void sortDecreasing(int *arr, size_t *size) {
  if (*size == 0)return;
  
  const int *end = (arr + (*size));
  int *i = arr + 1, *temp;
  for ( ; i < end; ++i ) {
    while ( *i > *(i - 1) && i > arr) {
      *temp = *i;
      *i = *(i - 1);
      *(i - 1) = *temp;
      --i;
    }
  }
  
}

void printArr(const int *restrict arr, const size_t *restrict size) {
  const int *restrict end = arr + *size;
  for (const int *restrict p = arr; p < end; ++p) {
    printf("%d, ", *p);
  }
  printf("\n");
}

int *createArr(const size_t size, const int mval, const int Mval) {
  if (size == 0)
    return NULL;

  int *res;
  res = (int *)malloc(sizeof(int) * size);
  if (res != NULL) {
    for (int *restrict p = res; p < (res + size); ++p) {
      *p = (int)(rand() % (Mval - mval + 1)) + mval;
    }
  }
  return res;
}

pfuncSort_t SORT_TABLE[2] = {&sortIncreasing, &sortDecreasing};

int main() {

  size_t size, mval, Mval, SortBy;
  char ch;

  puts("Choose size of array\n");
  scanf(" %zu", &size);
  puts("Choose min boundary\n");
  scanf(" %zu", &mval);
  puts("Choose max boundary\n");
  scanf(" %zu", &Mval);
  puts("Sort by order : d = decreasing : i = increasing\n");
  scanf(" %c",&ch);

  int *arr = createArr(size, mval, Mval);
  
  printArr(arr,&size);
  SortBy = (ch == 'd' ? DECREASING : INCREASING);
  SORT_TABLE[SortBy](arr, &size);
  printArr(arr,&size);

  return EXIT_SUCCESS;
}
