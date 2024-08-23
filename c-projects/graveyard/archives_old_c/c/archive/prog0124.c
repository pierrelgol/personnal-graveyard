#include <stdio.h>
#include <math.h>

int main(){

  double x1,y1,x2,y2,distance;

  printf("Enter Two points coordinates (x,y)\n");

  printf("Enter the first points coordinates\n");
  scanf("%lf %lf", &x1, &y1);

  printf("Enter the first points coordinates\n");
  scanf("%lf %lf", &x2, &y2);
  

  distance = sqrt(pow(x1-x2, 2)+pow(y1-y2,2));

  printf("The distance between P1 (%.2lf , %.2lf) and P2 (%.2lf , %.2lf) is %lf\n",x1,y1,x2,y2,distance);

  return 0;
}
