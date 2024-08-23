#include <stdio.h>

int main(){


  
  int grade1, grade2, grade3;
  float average;

  printf("Enter your first grade : \n");
  scanf("%i",&grade1);
  printf("Enter your second grade : \n");
  scanf("%i",&grade2);
  printf("Enter your third grade : \n");
  scanf("%i",&grade3);

  average = (float) (grade1 + grade2 + grade3) / 3;

  printf("Your average is %f\n",average);

  return 0;
}
