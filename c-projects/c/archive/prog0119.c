#include <stdio.h>
#include <stdbool.h>

int main(){

  float distance_km, speed_kmh,time_h;
  _Bool inputIsValid = true;
  
  printf("What is the distance in km between the two cities :\n");
  inputIsValid = (scanf("%f",&distance_km) == 1 ? true : false);
  
  if (!inputIsValid) {
  return 1;
  }


  printf("What is the speed you'r travelling at in kmh :\n");
  inputIsValid = (scanf("%f",&speed_kmh) == 1 ? true : false);

  if (!inputIsValid) {
  return 1;
  }

  time_h = distance_km / speed_kmh;
  printf("To travel to the given city it will take you %f hours \n",time_h);

  return 0;
}
