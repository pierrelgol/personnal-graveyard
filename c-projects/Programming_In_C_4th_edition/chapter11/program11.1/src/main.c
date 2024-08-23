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

// Program to demonstrate the bitwise AND operator
int main(void) {
  unsigned int word1 = 077u, word2 = 0150u, word3 = 0210u;
  printf("%o ", word1 & word2);
  printf("%o ", word1 & word1);
  printf("%o ", word1 & word2 & word3);
  printf("%o\n", word1 & 1);
  return 0;
}
