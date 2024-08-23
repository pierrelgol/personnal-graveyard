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

typedef struct date {
  unsigned int day, month, year;
} Date;

Date getDateInput(void) {
  Date n;
REDO:
  printf("Enter a date in the format (dd/mm/yyyy) :\n");
  scanf(" %d/%d/%d", &n.day, &n.month, &n.year);
  if (n.day > 31 || n.month > 12 || n.year <= 1900)
    goto REDO;

  return n;
}

int compute_ttn(const Date *n) {
  return (1461 * (n->month <= 2 ? n->year - 1 : n->year) / 4 +
          153 * (n->month <= 2 ? n->month + 13 : n->month + 1) / 5 + n->day);
}

int compute_elapsed_day(const Date *n1, const Date *n2) {
  int tt_n1, tt_n2, elapsed_day;
  tt_n1 = compute_ttn(n1);
  tt_n2 = compute_ttn(n2);
  elapsed_day = tt_n2 - tt_n1;

  return elapsed_day;
}

int main() {

  Date d1, d2;
  int res;
  d1 = getDateInput();
  d2 = getDateInput();
  res = compute_elapsed_day(&d1, &d2);
  printf("the number of elapsed day between %d / %d / %d and %d / %d / %d is "
         "%d.\n",
         d1.day, d1.month, d1.year, d2.day, d2.month, d2.year, res);

  return EXIT_SUCCESS;
}
