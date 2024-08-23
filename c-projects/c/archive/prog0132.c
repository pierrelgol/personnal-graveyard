#include <stdio.h>

int main(){

  double first_entry, second_entry; 
  int operator;

  printf("Enter first number\n");
  scanf("%lf",&first_entry);

  printf("Enter second number\n");
  scanf("%lf",&second_entry);

  printf("select an operator 1: + , 2: - , 3: / , 4: * , 5: %%\n");
  scanf("%i",&operator);

  switch (operator) {
  
    case 1 : printf("%lf\n",first_entry + second_entry); break;
    case 2 : printf("%lf\n",first_entry - second_entry); break;
    case 3 : printf("%lf\n",first_entry / second_entry); break;
    case 4 : printf("%lf\n",first_entry * second_entry); break;
    case 5 : printf("%il\n",(int)first_entry % (int)second_entry ); break;
    default: printf("wrong input\n");

  }


  return 0;
}
