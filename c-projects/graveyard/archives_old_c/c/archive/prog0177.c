#include <stdio.h>

long long int ComputeSumOfDivisor(long long int number);


int main(){

  long long int number, sum = 0;

  printf("Enter a number to find if it's a perfect number\n");
  scanf("%lli",&number);

  sum = ComputeSumOfDivisor(number);
  printf("%lli\n",sum);
  if (sum == number) {
    printf("perfect number\n");
  }else {
    printf("Not perfect number\n");
  }

  return 0;
}


  long long int ComputeSumOfDivisor(long long int number){
   long long int sum = 1;
   register long long int i;
      if (number == 1)
        return sum;

      for ( i = 2; (i * i) < number; i++ ){  
        if ((number % i) == 0){
          sum = sum + i + number / i;
        }
      }
      if ((i*i) == number){
        sum = sum + i;
      }
    return sum;
  }
