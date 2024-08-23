#include <stdio.h>

int main(){

  int grade;
  _Bool gradeIsValid;

  printf("Enter a grade :\n");
  scanf("%i",&grade);

  gradeIsValid = ( (grade >= 0 && grade <= 100) ? 1 : 0 );

  if (gradeIsValid){
    printf("%i is a valid grade\n",grade);
  }else {
    printf("%i is not a valid grade\n",grade);
  }

  return 0;
}
