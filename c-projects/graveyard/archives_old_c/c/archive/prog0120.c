#include <stdio.h>

int main(){

  int total_seconds, total_minutes, total_hour;

  printf("Enter the total number of seconds\n");
  scanf("%i",&total_seconds);

  total_minutes = total_seconds / 60;
  total_seconds = total_seconds % 60;

  total_hour = total_minutes / 60;
  total_minutes = total_minutes % 60;

  printf("the total number of seconds is equal to hour : %i | minutes : %i | seconds : %i\n",total_hour,total_minutes,total_seconds);

  return 0;
}
