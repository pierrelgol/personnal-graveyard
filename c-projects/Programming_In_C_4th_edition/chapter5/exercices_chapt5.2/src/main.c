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
#include <stdbool.h>

//--------------------[     MAIN METHOD     ]--------------------------------//

/*2. Write a program that asks the user to type in two integer values at the
     terminal. Test these two numbers to determine if the first is evenly
     divisible by the second, and then display an appropriate message at the
     terminal.*/

int main() {

  int n1, n2;

  printf("Enter two integers n1 and n2\n");
  scanf("%d %d",&n1,&n2);

  if (n2 != 0)
    printf("N1 is evenly divisible by N2 is : %s : (N1 %% N2 == %d)\n",(n1 % n2 == 0 ? "true" : "false"), (n1 % n2));
  else
    printf("Dividing by zero is not allowed\n");
  
  return EXIT_SUCCESS;
}
