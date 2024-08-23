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
  int i, intValue, result = 0, neg_f = (string[0] == '-' ? 1 : 0);
  for (i = neg_f; string[i] >= '0' && string[i] <= '9'; ++i) {
    intValue = string[i] - '0';
    result = result * 10 + intValue;
  }
  return (neg_f == 1 ? -result : result);
}

int main(void) {
  int strToInt(const char string[]);
  printf("%i\n", strToInt("245"));
  printf("%i\n", strToInt("100") + 25);
  printf("%i\n", strToInt("13x5"));
  printf("%i\n", strToInt("-78"));
  return 0;
}