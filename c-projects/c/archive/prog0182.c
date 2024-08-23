#include <stdio.h>
#include <string.h>

#define SIZE 7
const char *daysOfTheWeek[7] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};

int main(){

  float tempf[SIZE] = {0};
  int i, maxI = 0, minI = 0;
  float maxTemp = tempf[0], minTemp = tempf[0], average = 0;

  for ( i = 0; i < SIZE; ++i ) {

    printf("Enter the temperature for %s :\n",daysOfTheWeek[i]);
    scanf("%f",&tempf[i]);

    average += tempf[i];

    if (i == 0) {
      maxTemp = tempf[i];
      minTemp = tempf[i];
    }

    maxTemp = (tempf[i] > maxTemp ? tempf[i] : maxTemp);
    maxI = (maxTemp == tempf[i] ? i : maxI );
    
    minTemp = (tempf[i] < minTemp ? tempf[i] : minTemp);
    minI = (minTemp == tempf[i] ? i : minI );
  
  }

  printf("The hotest daysOfTheWeek was %s with a temperature of %f\n",daysOfTheWeek[maxI],maxTemp);
  printf("The coldest daysOfTheWeek was %s with a temperature of %f\n",daysOfTheWeek[minI],minTemp);
  printf("On average the temperature this week was %f\n", (average / SIZE) );
  printf("\n");

  return 0;
}
