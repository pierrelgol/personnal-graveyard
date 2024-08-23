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

// Function to convert a string to an integer
float strTofloat(const char string[]) {
  size_t i, pointIndex, digit = 0, neg_f = string[0] == '-' ? 1 : 0;
  float res = 0, lv = 0,rv = 0;
  for (i = 0; string[i] != '\0'; i++) {
    pointIndex = string[i] == '.' ? i : 0;
    if (pointIndex != 0)
      break;
  }
  for (i = neg_f; string[i] >= '0' && string[i] <= '9'; i++) {
    digit = string[i] - '0';
    lv = lv * 10 + digit;
  }
  for (i = i + 1; string[i] >= '0' && string[i] <= '9'; i++) {
    digit = string[i] - '0';
    rv += digit;
    rv *= 10;
  }
  
  for (; i > pointIndex; --i ) {
    rv /= 10;
  }
  res = lv + rv;
  
  return (neg_f == 1 ? -res : res);
}

int main(void) {
  int strToInt(const char string[]);
  printf("%f\n", strTofloat("-245.09"));
  // printf("%f\n", strTofloat("100.23") + 25);
  // printf("%f\n", strTofloat("-24.90"));
  return 0;
}