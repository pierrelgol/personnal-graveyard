#include <stdio.h>

int main(){

  int year, month, day, total_number_of_days;
  int day_in_month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
  _Bool isLeap = 0;

  printf("Enter the year\n");
  scanf("%i",&year);
  
  printf("Enter the month\n");
  scanf("%i",&month);

  printf("Enter the day\n");
  scanf("%i",&day);
  
  isLeap = ( (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)) );
  total_number_of_days = (isLeap ? 366 : 365);
  day_in_month[1] = (total_number_of_days == 366 ? 29 : 28);

  if ((day+1) > day_in_month[month]) {
    ++month;
    day = 1;
    if (month > 12) {
      month = 1;
      ++year;
    }
    printf("The next date is : %i : %i : %i\n",day,month,year);
  }else {
    printf("The next date is : %i : %i : %i\n",day,month,year);
  }


  return 0;

}
