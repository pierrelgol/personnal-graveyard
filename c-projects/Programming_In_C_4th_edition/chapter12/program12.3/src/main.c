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

/* Program to illustrate the use of the #include statement
 Note: This program assumes that definitions are
 set up in a file called metric.h */
#include "metric.h"
#include <stdio.h>
int main(void) {
  float liters, gallons;
  printf("*** Liters to Gallons ***\n\n");
  printf("Enter the number of liters: ");
  scanf("%f", &liters);
  gallons = liters * QUARTS_PER_LITER / 4.0;
  printf("%g liters = %g gallons\n", liters, gallons);
  return 0;
}
