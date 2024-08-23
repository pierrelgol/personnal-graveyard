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

#include <stdio.h>
#include <stdlib.h>

//--------------------[     MAIN METHOD     ]--------------------------------//

// Function to sum the elements of an integer array
int arraySum(int array[], const int n) {
  int sum = 0, *ptr;
  int *const arrayEnd = array + n;
  for (ptr = array; ptr < arrayEnd; ++ptr)
    sum += *ptr;
  return sum;
}

int main(void) {
  int arraySum(int array[], const int n);
  int values[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};
  printf("The sum is %i\n", arraySum(values, 10));
  return 0;
}
