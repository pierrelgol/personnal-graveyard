/*
 *
 *   Title of project :
 *   Date of creation :
 *   Author(s) : PierreLgol
 *   github : https://github.com/pierrelgol
 *
 *   More on the project :
 *
 *   #TODO(s) :
 *
 *
 */

//--------------------[     DEPENDENCIES DECLARATION     ]--------------------//

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

//--------------------[     MAIN METHOD     ]--------------------------------//

// Program to determine tomorrow's date
typedef struct date_t {
  int month;
  int day;
  int year;
  int padding;
} Date_t;

int dateUpdate(Date_t *today);
bool isLeapYear(Date_t *d);
int numberOfDays(Date_t *d);

// Function to calculate tomorrow's date
int main(void) {

  Date_t thisDay;

  printf("Enter today's date (mm dd yyyy): ");
  scanf("%i%i%i", &thisDay.month, &thisDay.day, &thisDay.year);

  dateUpdate(&thisDay);
  printf("Tomorrow's date is %i/%i/%.2i.\n", thisDay.month, thisDay.day,thisDay.year);

  return 0;
}

int dateUpdate(Date_t *today){
  if(!today) return -7;
  if(today->day != numberOfDays(today)) return -1;
  today->day += 1;
  if ( today->day > numberOfDays(today) ){
    today->month++;
    today->day = 1;
  }
  if ( today->month > 12 ){
    today->year++;
    today->month = 1;
  }
  return 0;
}
// Function to find the number of days in a month
int numberOfDays(Date_t *d) {
  int daysPerMonth[12] = {31, (isLeapYear(d) == true ? 29 : 28), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  return daysPerMonth[d->month-1];
}

// Function to determine if it's a leap year
bool isLeapYear(Date_t *d) {
  return ((d->year % 4 == 0 && d->year % 100 != 0) || d->year % 400 == 0);
}
