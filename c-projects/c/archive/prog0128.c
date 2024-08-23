#include <stdio.h>

int main(){

  double a, b;

  printf("Enter two floating point values\n");
  scanf("%lf %lf",&a,&b);

  if (a>b) {
    printf("maximum is a : %lf \n",a);
    printf("minimun is b : %lf \n",b);
  }else {
    printf("maximum is b : %lf \n",b);
    printf("minimun is a : %lf \n",a);
  }

  return 0;
}
