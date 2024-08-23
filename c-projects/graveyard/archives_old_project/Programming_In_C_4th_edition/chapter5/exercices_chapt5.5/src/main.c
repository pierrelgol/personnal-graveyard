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

/*5. You developed Program 4.9 to reverse the digits of an integer typed in
from the terminal. However, this program does not function well if you type
in a negative number. Find out what happens in such a case and then modify the
program so that negative numbers are correctly handled. For example, if the
number −8645 is typed in, the output of the program should be 5468−.*/

int main() {

  int number, right_digit, negative_f;

  printf("Enter your number.\n");
  scanf("%i", &number);

  if (number < 0) {
    negative_f = 1;
    number *= -1;
  }
  do {
    right_digit = number % 10;
    printf("%i", right_digit);
    number = number / 10;
  } while (number != 0);

  if (negative_f == 1) {
    printf("-");
  }
  printf("\n");

  return EXIT_SUCCESS;
}
