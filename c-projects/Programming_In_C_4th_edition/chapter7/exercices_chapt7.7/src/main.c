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
/*7. Write a function that raises an integer to a positive integer power.
     Call the function x_to_the_n() taking two integer arguments x and n. Have
     the function return a long int, which represents the results of calculating
     xn.*/

long int x_to_the_n_recursive(long int n, int pow){
  if ( pow == 1 ) return n;
  return n * (x_to_the_n_recursive(n, pow - 1));
}

long int x_to_the_n(long int n, int pow){
  if ( pow == 1 ) return n;
  long int res = 1;
  for ( size_t i = pow; i != 0; i--){
    res *= n;
  }
  return res;
}

int main() {

  printf("2 to the power of 1 is : %li\n",x_to_the_n_recursive(2, 1));
  printf("2 to the power of 2 is : %li\n",x_to_the_n_recursive(2, 2));
  printf("2 to the power of 3 is : %li\n",x_to_the_n_recursive(2, 3));
  printf("2 to the power of 4 is : %li\n",x_to_the_n_recursive(2, 4));
  printf("2 to the power of 5 is : %li\n",x_to_the_n_recursive(2, 5));
  printf("2 to the power of 6 is : %li\n",x_to_the_n_recursive(2, 6));
  printf("2 to the power of 7 is : %li\n",x_to_the_n_recursive(2, 7));
  printf("2 to the power of 8 is : %li\n",x_to_the_n_recursive(2, 8));

  printf("2 to the power of 1 is : %li\n",x_to_the_n(2, 1));
  printf("2 to the power of 2 is : %li\n",x_to_the_n(2, 2));
  printf("2 to the power of 3 is : %li\n",x_to_the_n(2, 3));
  printf("2 to the power of 4 is : %li\n",x_to_the_n(2, 4));
  printf("2 to the power of 5 is : %li\n",x_to_the_n(2, 5));
  printf("2 to the power of 6 is : %li\n",x_to_the_n(2, 6));
  printf("2 to the power of 7 is : %li\n",x_to_the_n(2, 7));
  printf("2 to the power of 8 is : %li\n",x_to_the_n(2, 8));


  return EXIT_SUCCESS; 
}
