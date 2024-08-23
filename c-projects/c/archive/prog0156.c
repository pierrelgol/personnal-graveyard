#include <stdio.h>

int main(){

  int num, pow, count, result = 1;
  _Bool inputIsValid;

  printf("Enter a number the power to compute :\n");
  scanf("%i %i",&num,&pow);

  inputIsValid = ( (num >= 1 && pow >= 1) ? 1 : 0 );

  if (inputIsValid) {

    for (count = 0; count < pow; ++count) {

      result *= num;
      
    }

    printf("%i to the power of %i is equal to %i\n",num,pow,result);
    
  }else {
    printf("Program can't handle negative input\n");
    return 1;
  }

  return 0;
}
