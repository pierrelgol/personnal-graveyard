#include <stdio.h>
#include <stdlib.h>
#include "cvInt.h"

int main(){

  int year, month, day; 
   char* hx_year;
   char* hx_month; 
   char* hx_day;
 
  printf("Enter the current year :\n");
  scanf("%i",&year);

  printf("Enter the current month:\n");
  scanf("%i",&month);

  printf("Enter the current day :\n");
  scanf("%i",&day);
  
  hx_year = int_to_hex(year);
  hx_month = int_to_hex(month); 
  hx_day = int_to_hex(day);


   printf("the date is %i : %i : %i in decimal and %s : %s : %s in hex\n",day, month, year,hx_day, hx_month, hx_year );
  
  free(hx_year);
  free(hx_month);
  free(hx_day);

  return 0;
}
