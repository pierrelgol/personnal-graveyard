#include <stdio.h>

int main(){
  
  int total_seconds, total_minutes, total_hours;

  printf("Enter the total number of seconds\n");
  scanf("%i",&total_seconds);

  total_minutes = total_seconds / 60;
  total_seconds = total_seconds % 60;

  total_hours = total_minutes / 60;
  total_minutes = total_minutes % 60;

  printf("The time is : %0i : %0i : %0i \n",total_hours,total_minutes,total_seconds);

  return 0;
}
