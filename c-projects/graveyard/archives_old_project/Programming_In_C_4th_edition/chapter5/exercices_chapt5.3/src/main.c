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

/*3. Write a program that accepts two integer values typed in by the user.
     Display the result of dividing the first integer by the second, to three-
     decimal-place accuracy. Remember to have the program check for division by
     zero.*/

int main() {
  
  int n1, n2;

  printf("Enter two integers n1 and n2\n");
  scanf("%d %d", &n1, &n2);

  if (n2 != 0)
    printf("N1 / N2 is : %.3f\n",((float)n1 / n2) );
  else
    printf("Dividing by zero is not allowed\n");

  return EXIT_SUCCESS;
}
