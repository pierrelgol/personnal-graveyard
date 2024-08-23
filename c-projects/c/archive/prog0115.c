#include <stdio.h>

int main (){
  
  float temp_celcius, temp_fahrenheit;

  printf("Enter a temperature in celcius :\n");
  scanf("%f",&temp_celcius);

  temp_fahrenheit = temp_celcius * 1.8 + 32;
  printf("temp_celcius = %f, temp_fahrenheit = %f\n",temp_celcius,temp_fahrenheit);

  return 0;
}
