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

 int n, i;
  
  printf("|   n   |   TN  |\n");
  printf("|-------|-------|\n");
  for (i = 1, n = 5; i <= 10; i++) {
		printf("| %5d | %5d |\n", n * i, ( (n * i) * (i * n + 1) / 2));
	}
  
  return EXIT_SUCCESS;
}
