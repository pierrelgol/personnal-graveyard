#include <stdio.h>

int main(){

  int num1;

  printf("Enter an integer :\n");
  scanf("%i",&num1);

  num1 = num1 * (num1 < 0 ? -1 : 1);

  printf("The absolute value is : %i\n",num1);

  return 0;
}
