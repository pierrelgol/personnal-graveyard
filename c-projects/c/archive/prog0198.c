#include <stdio.h>

int count_input_less_than(int number, int count);

int main(){

  int number;
  printf("Enter a number :\n");
  scanf("%i",&number);

  printf("the is %i number lesser than number\n",count_input_less_than(number, 0));

  return 0;
}

int count_input_less_than(int number, int count)
{
  int entry;
  printf("Enter a new number :\n");
  scanf("%i",&entry);
  if(entry == -1)
    return count;
  if (entry < number)
    count ++;
  return count_input_less_than(number,count);

}

