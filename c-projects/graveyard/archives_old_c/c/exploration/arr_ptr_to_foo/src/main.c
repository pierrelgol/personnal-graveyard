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

//--------------------[     METHOD DECLARATION     ]-------------------------//

void addition(int a, int b);
void substraction(int a, int b);
void multiplication(int a, int b);
void division(int a, int b);

//--------------------[     MAIN METHOD     ]--------------------------------//

int main() {
  int a, b, choice;
  void (*foo[])(int, int) = {addition, substraction, multiplication, division};

  printf("Choice of opperation : \n0 - addition\n1 - substraction\n2 - "
         "multiplication\n3 - division\n");
  scanf("%d", &choice);

  printf("Enter A\n");
  scanf("%d", &a);

  printf("Enter B\n");
  scanf("%d", &b);
  addition(a, b);
  foo[choice](a, b);

  return EXIT_SUCCESS;
}
//--------------------[     METHOD IMPLEMENTATION    ]-----------------------//

void addition(int a, int b) { printf("a plus b = %d\n", (a + b)); }
void substraction(int a, int b) { printf("a minus b = %d\n", (a - b)); }
void multiplication(int a, int b) {
  printf("a multiplyed by b = %d\n", (a * b));
}

void division(int a, int b) {
  if (b != 0) {
    printf("a divided b = %d\n", (a / b));
  }
}
