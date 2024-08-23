#include <stdio.h>

int main(){

  int usr_input1, usr_input2, usr_input3;

  printf("Enter first integer :\n");
  scanf("%i",&usr_input1);

  printf("Enter second integer :\n");
  scanf("%i",&usr_input2);
   
  printf("Enter third integer :\n");
  scanf("%i",&usr_input3);

  if ( usr_input1 == usr_input2 && usr_input1 == usr_input3 ) {
    printf("EQUAL\n");
  }else {
    printf("NOT EQUAL\n");
  }

  return 0;
}
