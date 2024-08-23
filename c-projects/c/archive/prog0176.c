#include <stdio.h>

int computeSumOfDivisorFor(int number);


int main(){

  int number, sum;
  printf("Enter a number to compute the sum of it's divisor :\n");
  scanf("%i",&number);
  sum = computeSumOfDivisorFor(number);

  printf("The sum of divisor for %i is : %i\n",number,sum);

  return 0;
}

int computeSumOfDivisorFor(int number){
  int sumOfDivisor = 0, divisor = 0;
    for (divisor = 1 ; divisor <= number; divisor++) {
      if ((number % divisor) == 0)
        sumOfDivisor += divisor;
  }
  return (sumOfDivisor);
}
