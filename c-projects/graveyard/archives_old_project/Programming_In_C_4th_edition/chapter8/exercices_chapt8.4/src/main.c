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

#include <stdio.h>
#include <stdlib.h>

//--------------------[     MAIN METHOD     ]--------------------------------//

typedef enum Days_t {

  SUNDAY = 0,
  MONDAY = 1,
  TUESDAY = 2,
  WEDNESDAY = 3,
  THURSDAY = 4,
  FRIDAY = 5,
  SATURDAY = 6,

} Days_t;

typedef struct Date_t {

  int year, month, day;

} Date_t;

Date_t getDateInput(void) {
  Date_t n;
REDO:
  printf("Enter a date in the format (dd/mm/yyyy) :\n");
  scanf(" %d/%d/%d", &n.day, &n.month, &n.year);
  if (n.day > 31 || n.month > 12 || n.year <= 1900)
    goto REDO;

  return n;
}

int compute_ttn(const Date_t *n) {
  return (1461 * (n->month <= 2 ? n->year - 1 : n->year) / 4 +
          153 * (n->month <= 2 ? n->month + 13 : n->month + 1) / (5 + n->day));
}

int compute_elapsed_day(const Date_t *n1, const Date_t *n2) {
  int tt_n1, tt_n2, elapsed_day;
  tt_n1 = compute_ttn(n1);
  tt_n2 = compute_ttn(n2);
  elapsed_day = tt_n2 - tt_n1;

  return elapsed_day;
}

int main() {

  Date_t d1, d2;
  int res;
  d1 = getDateInput();
  d2 = getDateInput();
  res = compute_elapsed_day(&d1, &d2);
  printf("the number of elapsed day between %d / %d / %d\n",d1.day,d1.month,d1.year);
  printf("and %d / %d / %d\n",d2.day,d2.month,d2.year);    
  printf("is : %d which will be a : ",res);
  switch (res % 7) {
    case MONDAY    : printf("Monday\n"); break;
    case TUESDAY   : printf("Tuesday\n"); break;
    case WEDNESDAY : printf("Wednesday\n"); break;
    case THURSDAY  : printf("Thursday\n"); break;
    case FRIDAY    : printf("Friday\n"); break;
    case SATURDAY  : printf("Saturday\n"); break;
  }
  return EXIT_SUCCESS;
}
