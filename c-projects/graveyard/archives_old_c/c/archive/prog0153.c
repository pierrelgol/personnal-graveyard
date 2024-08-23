#include <stdio.h>

int main(){

  int num, result = 1, pow, i;
  _Bool inputIsValid;
  
  printf("Enter the number and the power :\n");
  scanf("%i %i",&num,&pow);

  inputIsValid = ((num >= 1 && pow >= 1) ? 1 : 0);
  
  if(inputIsValid){

    for ( i = 0; i < pow; ++i ) {
      result *= num;
    }
  }else {
  printf("num and pow need to be greater than 1 :\n");
  return 1;
  }

  printf("num : %i to the power of : %i = %i\n",num,pow,result);

  return 0;
}
