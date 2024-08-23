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

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

//--------------------[     MAIN METHOD     ]--------------------------------//
#define SIZE 5
#define R1 4
#define C1 5
#define R2 5
#define C2 4


int ARR0[SIZE] = {1,2,3,4,5};
int ARR1[4][5] = {
    {1, 2, 4, 5, 5}, {1, 2, 4, 5, 5}, {1, 2, 4, 5, 5}, {1, 2, 4, 5, 5}};

int ARR2[5][4] = {
    {1, 2, 4, 5}, {1, 2, 4, 5}, {1, 2, 4, 5}, {1, 2, 4, 5}, {1, 2, 4, 5}};

int PRIME = 47;

bool isPrime() {
  if (PRIME <= 1)
    return false;
  if (PRIME == 2 || PRIME == 3)
    return true;
  if (PRIME % 2 == 0 || PRIME % 3 == 0)
    return false;
  for (size_t i = 5; i * i < PRIME;) {
    if (PRIME % i == 0 || PRIME % (i + 2) == 0) {
      return false;
    }
    i += 6;
  }
  return true;
}
int64_t arraySum() {
  int64_t sum = 0;
  for (size_t i = 0; i < SIZE; i++) {
    sum += ARR0[i];
  }
  return sum;
}

void transposeMatrix() {

  for (size_t i = 0; i < R1 && i < C2; i++) {
    for (size_t j = 0; j < C1 && i < C2; j++) {
      ARR1[i][j] = ARR2[j][i];
    }
  }
}

void printMatrix() {
  for (size_t i = 0; i < R1; i++) {
    printf("\n");
    for (size_t j = 0; j < C1; j++) {
      printf("%d, ", ARR1[i][j]);
    }
  }
  printf("\n");
}
void printMatrix2() {
  for (size_t i = 0; i < R2; i++) {
    printf("\n");
    for (size_t j = 0; j < C2; j++) {
      printf("%d, ", ARR2[i][j]);
    }
  }
  printf("\n");
}
void sort_ascending() {
  int i, j, temp;
    for (i = 0; i < SIZE - 1; ++i)
      for (j = i + 1; j < SIZE; ++j)
        if (ARR0[i] > ARR0[j]) {
          temp = ARR0[i];
          ARR0[i] = ARR0[j];
          ARR0[j] = temp;
        }
}
void sort_descending() {
  int i, j, temp;
    for (i = 0; i < SIZE - 1; ++i)
      for (j = i + 1; j < SIZE; ++j)
        if (ARR0[i] < ARR0[j]) {
          temp = ARR0[i];
          ARR0[i] = ARR0[j];
          ARR0[j] = temp;
        }
}

int main() { 

	
	return EXIT_SUCCESS;
}
