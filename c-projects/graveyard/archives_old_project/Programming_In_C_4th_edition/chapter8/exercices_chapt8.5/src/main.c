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

typedef struct Datetime_t{

 int year, month, day, hour, minute, second;
 
}Datetime_t;

Datetime_t getDateInput(void) {
  Datetime_t n;
REDO:
  printf("Enter a date in the format (dd/mm/yyyy) and the time in the format (HH/MM/SS) :\n");
  scanf(" %d/%d/%d/%d/%d/%d", &n.day, &n.month, &n.year, &n.hour, &n.minute, &n.second);
  if (n.day > 31 || n.month > 12 || n.year <= 1900)
    goto REDO;

  return n;
}

void dateUpdate(Datetime_t *to_update){
 to_update->day += to_update->hour / 24;
 to_update->hour %= 24;
 /* could implement working update for month,
 and year but want to move forward*/
}

void timeUpdate(Datetime_t *to_update){
 Datetime_t update = getDateInput();
 to_update->second += update.second;
 to_update->minute += update.minute;
 to_update->hour += update.hour;

 if (to_update->second >= 60) {
  to_update->minute += to_update->second /60;
  to_update->second %= 60;
 }
 if (to_update->minute >= 60) {
  to_update->hour += to_update->minute /60;
  to_update->minute %= 60;
 }
 if (to_update->hour >= 24) {
  dateUpdate(to_update);
 }

}

Datetime_t clockKeeper(Datetime_t current_dt){
 Datetime_t updated = current_dt;
 timeUpdate(&updated);

 return updated;
}
int main()
{
 Datetime_t test = {2023,05,16,13,51,10};

  printf("test = %d / %d / %d and %d / %d / %d \n", test.day, test.month, test.year, test.hour, test.minute, test.second);
 timeUpdate(&test);
  printf("test = %d / %d / %d and %d / %d / %d \n", test.day, test.month, test.year, test.hour, test.minute, test.second);

return EXIT_SUCCESS;
}
