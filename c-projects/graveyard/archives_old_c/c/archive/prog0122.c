#include <stdio.h>

int main(){

  int number, sum_of_number_digit;

  printf("Enter a number you'd like to sum the digits of :\n");
  scanf("%i",&number);

  sum_of_number_digit = number % 10 + (number / 10) % 10 + (number / 100) % 10;

  printf("The sum of number %i digits is equal to %i \n",number,sum_of_number_digit);

  return 0;
  
}
