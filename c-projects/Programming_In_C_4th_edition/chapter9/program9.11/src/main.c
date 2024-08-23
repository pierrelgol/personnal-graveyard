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

// Function to convert a string to an integer
int strToInt(const char string[]) {
  int i, intValue, result = 0;
  for (i = 0; string[i] >= '0' && string[i] <= '9'; ++i) {
    intValue = string[i] - '0';
    result = result * 10 + intValue;
  }
  return result;
}

int main(void) {
  int strToInt(const char string[]);
  printf("%i\n", strToInt("245"));
  printf("%i\n", strToInt("100") + 25);
  printf("%i\n", strToInt("13x5"));
  return 0;
}