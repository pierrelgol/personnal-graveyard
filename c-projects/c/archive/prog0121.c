#include <stdio.h>
#include <stdlib.h>

int main (){

  double data;

  printf("Enter a double value :\n");
  scanf("%lf",&data);

  printf("The extracted decimal portion of data is : %lf\n",data - (int)data);

  return 0;
}
