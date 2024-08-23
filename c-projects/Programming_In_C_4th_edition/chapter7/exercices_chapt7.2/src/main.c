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

/* . Modify Program 7.4 so the value of triangularNumber is returned by the
     function. Then go back to Program 4.5 and change that program so that it calls
     the new version of the calculateTriangularNumber() function. */

int calculateTriangularNumber(int n) {
  int i, triangularNumber = 0;
  for (i = 1; i <= n; ++i)
    triangularNumber += i;
	return (triangularNumber);
}

int main(void)
{
  int number, triangularNumber, counter;
  
  for (counter = 1; counter <= 5; ++counter) {
		 
    printf("What triangular number do you want? ");
    scanf("%i", &number);
    triangularNumber = 0;
		triangularNumber = calculateTriangularNumber(number);
    printf("Triangular number %i is %i\n\n", number, triangularNumber);
  }
  return 0;
}
