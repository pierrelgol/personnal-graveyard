#include <stdio.h>

int main(){

  int number_of_days,count, million = 1000000;
  double cent_option = 0.01, sum = 0;

  printf("To compare the two options enter the number of days, you'r willing to wait before taking the million.\n");
  scanf("%i",&number_of_days);

  for ( count = 1; count < number_of_days; ++count) {
    sum += cent_option;
    cent_option *= 2;
    
  }
  if (sum > million) {
    printf("Based on your answer the second option seems to be preferable\n");
    printf("In %i days the doubling cent option will have generated a total of %.2lf$\n",number_of_days,sum);
  }else {
    printf("Based on your answer the first option seems to be preferable\n");
    printf("In %i days the doubling cent option will have generated a total of %.2lf $\n",number_of_days,sum);
  }
  printf("\n");

  return 0;
}
