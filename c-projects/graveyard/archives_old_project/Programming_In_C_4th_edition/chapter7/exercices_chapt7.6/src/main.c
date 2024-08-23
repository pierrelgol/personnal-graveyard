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

// Function to calculate the absolute value of a number
float absoluteValue(float x) {
  if (x < 0)
    x = -x;
  return (x);
}

// Function to compute the square root of a number
float squareRoot(double x) {
  const double epsilon = .00000001;
  double guess = 1.0;
  while (absoluteValue(guess * guess - x) >= epsilon)
    guess = (x / guess + guess) / 2.0;
  return guess;
}

int main(void) {
  printf("squareRoot (2.0) = %f\n", squareRoot(2.0));
  printf("squareRoot (144.0) = %f\n", squareRoot(144.0));
  printf("squareRoot (17.5) = %f\n", squareRoot(17.5));
  return 0;
}