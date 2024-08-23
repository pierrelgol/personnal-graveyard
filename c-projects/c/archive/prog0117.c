#include <stdio.h>

int main(){

  float a, nth_element, progression;
  int n;

  printf("Enter the initial value of the arithmatic sequence\n");
  scanf("%f",&a);

  printf("Enter the difference in the arithmatic sequence\n");
  scanf("%f",&progression);

  printf("Which nth element of a would you like to display\n");
  scanf("%i",&n);

  nth_element = a + (n - 1) * progression;
  printf("the nth element of a is %f\n",nth_element);

  return 0;

}
