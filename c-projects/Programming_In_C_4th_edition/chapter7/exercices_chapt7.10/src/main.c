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

#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

//--------------------[     MAIN METHOD     ]--------------------------------//

bool isPrime(const long long unsigned int *n) {
  if (*n <= 1)
    return false;
  if (*n == 2 || *n == 3)
    return true;
  if (*n % 2 == 0 || *n % 3 == 0)
    return false;
  for (size_t i = 5; i * i < *n; ) {
    if (*n % i == 0 || *n % (i + 2) == 0) {
      return false;
    }
    i+= 6;
  }
  return true;
}

int main() {

  long long unsigned int n;

  printf("Enter a number :\n");
  scanf("%lli",&n);
  printf("%lli is %s Prime Number\n",n,(isPrime(&n) == 1 ? "a" : "not a"));
   
  return EXIT_SUCCESS;
}
