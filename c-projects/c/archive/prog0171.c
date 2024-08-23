#include <stdio.h>

  _Bool isEven(int x);
  _Bool isOdd(int x);

  _Bool isEven(int x){
    return (x % 2 == 0);
  }
  _Bool isOdd(int x){
    return (x % 2 != 0);
  }

int main(){

  int x;
  printf("Enter a number :\n");
  scanf("%i",&x);
  printf("The number x is Odd : %i | Even : %i \n",isOdd(x), isEven(x));

  return 0;
}
