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
#include <string.h>

//--------------------[     MAIN METHOD     ]--------------------------------//

typedef enum {
  JAN = 1,
  FEB,
  MAR,
  MAY,
  JUN,
  JUL,
  AUG,
  SEP,
  OCT,
  NOV,
  DEC,
} month;

char *month_name(month m);

int main() { 

  month m;
  char *p;

  puts("Enter a month index to display the string \n");
  scanf(" %d",&m);
  p = month_name(m);
  printf("the index %d correspond to : %s\n",m,p);
  free(p);
  return EXIT_SUCCESS;
}

char *month_name(month m) {
  if(m >= 1 && m <= 12){
    const char *months[] = {"Not a month","January",   "february", "March",    "April",
                            "May",       "June",     "July",     "August",
                            "September", "October",  "November", "December"};
    char *p = malloc(sizeof(months[m]));
    if (p) {
      strcpy(p, months[m]);
      return p;
    }
  }
  return NULL;
}
