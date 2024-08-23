#include <stdio.h>

int main(){

  int year;
  _Bool isLeap = 0;

  printf("Enter a year\n");
  scanf("%i",&year);

  isLeap = ( (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)) );

  printf(isLeap ? "%i is leap\n" : "%i is not leap\n",year);

  return 0;

}
