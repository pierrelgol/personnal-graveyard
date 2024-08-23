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

int main() {
  
  int n = 1, i, j;

  printf("|    n    |    n!   |\n");
  printf("|---------|---------|\n");
  for (i = 1; i <= 10; i++) {
    for (j = i; j > 0; j--) {
      n *= j;
    }
    printf("| %7d | %7d |\n", i, (n));
    n = 1;
  }

  return EXIT_SUCCESS;
}
