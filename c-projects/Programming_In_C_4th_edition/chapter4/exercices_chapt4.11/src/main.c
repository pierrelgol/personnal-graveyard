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

/*11. Write a program that calculates the sum of the digits of an integer. For
      example, the sum of the digits of the number 2155 is 2 + 1 + 5 + 5 or 13.
      The program should accept any arbitrary integer typed in by the user. */

int main() { 

  int nput, nput_sum = 0;

  printf("Enter a number to sum up digits\n");
  scanf("%d",&nput);
  // get abs value of nput.
  nput *= ( nput > 0 ? 1 : -1 );
  
  printf("The sum of the digits of %d is",nput);
  do{
    nput_sum += (nput % 10);
    nput /= 10; 
  }while( nput != 0 );

  printf(" %d\n",nput_sum);
  
  return EXIT_SUCCESS; 
}
