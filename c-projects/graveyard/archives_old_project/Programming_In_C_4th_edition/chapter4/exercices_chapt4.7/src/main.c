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

int main(void) {
 
  int dollars, cents, count;
  
  for (count = 1; count <= 10; ++count) {
  
    printf("Enter dollars: ");
    scanf("%i", &dollars);
    printf("Enter cents: ");
    scanf("%i", &cents);
    printf("$%i.%.2i\n\n", dollars, cents);
  
  }
  
  return 0;
}
