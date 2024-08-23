#include <stdio.h>

int main(){

  printf("We have %d coins in the bank\n",100); //expected = "100";
  printf("We have %f coins in the bank\n",125.7); //expected = "125.7";
  printf("Year = %d\n",2023); //expected = "2023";
  printf("Your average grade is %f\n",95.13); //expected = "100";
  printf("num1 = %i, num2 = %i, sum = %i\n",5,7,5+7); //expected = "100";
  printf("num1 = %f, num2 = %f, sum = %f\n",5.2,7.3,9.5); //expected = "100";
  printf("num1 = %i, num2 = %i, sub = %i\n",5,3,5-3); //expected = "100";
  printf("a = %i, b = %i, sum = a + b %i\n",3,5,3+5); //expected = "100";
  printf("a = %i, b = %i, sum = %i + %i = %i\n",5,7,5,7,5+7); //expected = "100";
   printf("a = %i, b = %i, sum = a + b ( %i + %i ) = %i\n",5,7,5,7,5+7); //expected = "100";

  return 0;
}
