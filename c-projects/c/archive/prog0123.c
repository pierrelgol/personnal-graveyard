#include <stdio.h>

int main(){

  int number, reverse_number;

  printf("Enter a 3 digit integer to reverse :\n");
  scanf("%i",&number);

  reverse_number = (number % 10) * 100 + ((number / 10) % 10) * 10 + (number / 100) % 10;

  printf("%i revsersed is %i\n",number, reverse_number);




  return 0;

}
