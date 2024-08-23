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

#include <stdio.h>
#include <math.h>

// Function to calculate the absolute value of a number
double absoluteValue(double x) {
  if (x < 0)
    x = -x;
  return x;
}

// Function to compute the square root of a number
double sqrRoot(const double x) {
  const double epsilon = 0.00001;
  double guess = 1.0;
  while (absoluteValue(guess * guess - x) >= epsilon)
    guess = (x / guess + guess) / 2.0;
  return guess;
}

int main() {

  double a, b, c, discriminant, x1, x2;

  printf("Enter the values for a, b, c:\n");
  scanf("%lf %lf %lf", &a, &b, &c);

  if (a == 0) {
    printf("The equation is not quadratic.\n");
  } else {
    discriminant = (b * b) - (4 * a * c);

    if (discriminant < 0) {    
      printf("The roots are imaginary.\n");
    } else if (discriminant == 0) {
      x1 = -b / (2 * a);
      printf("The equation has a single real root: x = %lf\n", x1);
    } else {
      x1 = (-b + sqrRoot(discriminant)) / (2 * a);
      x2 = (-b - sqrRoot(discriminant)) / (2 * a);
      printf("The roots of the equation are: x1 = %lf, x2 = %lf\n", x1, x2);
    }
  }

  return 0;
}
