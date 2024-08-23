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

#define SIZE 10U

int main() {

  double arr[SIZE] = {0.0}, avg;

  for (size_t i = 0; i < SIZE; i++) {
    printf("Enter float #%zu :\n", i);
    scanf(" %lf", &arr[i]);
    avg += arr[i];
  }

  avg /= SIZE;
  printf("For arr : ");

  for (size_t i = 0; i < SIZE; i++) {
    printf("%.2lf, ", arr[i]);
  }

  printf("The average is %.3lf\n", avg);

  return EXIT_SUCCESS;
}
