#include <stdio.h>

int main(){

  int num1, num2, num3;

  printf("Enter number1 :\n");
  scanf("%i",&num1);
  
  printf("Enter number2 :\n");
  scanf("%i",&num2);
  
  printf("Enter number3 :\n");
  scanf("%i",&num3);

    if (num1 % num2 == 0 && num1 % num3 == 0) {
      printf("DIVISIBLE\n");
      return 0;
    }
     if (num2 % num1 == 0 && num2 % num3 == 0) {
      printf("DIVISIBLE\n");
      return 0;
    } 
    if (num3 % num2 == 0 && num3 % num1 == 0) {
      printf("DIVISIBLE\n");
      return 0;
    }
    else {
      printf("NON DIVISIBLE\n");
    }

  return 0;

}
