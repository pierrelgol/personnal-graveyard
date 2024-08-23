#include <stdio.h>
#include <stdlib.h>

int main(){

  float usr_hourly_wage = 0,  usr_hours_worked = 0;
  int scanf_return_value;
  _Bool inputIsValid = 1;


    printf("Enter your hourly wage :\n");

    if(inputIsValid){
      scanf_return_value = scanf("%f",&usr_hours_worked);
    }if (scanf_return_value != 1) {
      inputIsValid = 0;
    }

    printf("Enter your total number of hours worked this month :\n");
    
    if(inputIsValid){
      scanf_return_value = scanf("%f",&usr_hours_worked);
    }if (scanf_return_value != 1) {
      inputIsValid = 0;
    }

    if (inputIsValid) {      
      printf("This month you have earned : %.2f $\n",usr_hourly_wage * usr_hours_worked);
    }else {
    printf("cannot perform computation input is invalid\n");
    }

  return 0;
}
