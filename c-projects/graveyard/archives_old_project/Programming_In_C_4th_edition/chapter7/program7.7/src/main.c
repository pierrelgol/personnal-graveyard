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

// Function to calculate the absolute value
float absoluteValue(float x) {
  if (x < 0)
    x = -x;
  return x;
}

int main(void)
{
  float f1 = -15.5, f2 = 20.0, f3 = -5.0;
  int i1 = -716;
  float result;
  
  result = absoluteValue(f1);
  printf("result = %.2f\n", result);
  printf("f1 = %.2f\n", f1);
  
  result = absoluteValue(f2) + absoluteValue(f3);
  printf("result = %.2f\n", result);
  
  result = absoluteValue((float)i1);
  printf("result = %.2f\n", result);
  
  result = absoluteValue(i1);
  printf("result = %.2f\n", result);
  printf("%.2f\n", absoluteValue(-6.0) / 4);
  
  return 0;
}
