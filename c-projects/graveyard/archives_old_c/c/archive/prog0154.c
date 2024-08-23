#include <stdio.h>

int main(){

  int number_of_grade_to_process, count;
  float grade, average = 0;
  _Bool inputIsValid;

  printf("-------------- Grade processor --------------\n");
  printf("How many grade(s) would you like to process ?\n");
  scanf("%i",&number_of_grade_to_process);

  inputIsValid = (number_of_grade_to_process > 0 ? 1 : 0);

  if (inputIsValid) {

    for ( count = 0; count < number_of_grade_to_process; ++count ) {

      printf("Enter grade number %i :\n",count+1);
      scanf("%f",&grade);
      average += grade;
      
    }

    average /= number_of_grade_to_process;

    printf("You average is %.2f\n",average);
  
  }


  return 0;
}
