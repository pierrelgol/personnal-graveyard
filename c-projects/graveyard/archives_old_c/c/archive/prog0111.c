#include <stdio.h>

int main()
{

  int current_year;
  int user_age;

   printf("Enter the current year :\n");
   scanf("%i",&current_year);

   printf("Enter your age :\n");
   scanf("%i",&user_age);
 
   printf("You were born in %i\n",current_year - user_age);

  return 0;
}
