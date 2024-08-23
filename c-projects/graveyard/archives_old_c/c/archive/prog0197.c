#include <stdio.h>

int   sum_of_arithmic_progression(int number, int p, int sum);
int   compute_fibonnaci(int index, int *result);
int   compute_sum_of_digits(int number,int sum);
int   counts_of_digits(int number, int count);


#define SUCESSFULL_EXIT 0

int   main()
{
  int fib[3] = {0,1,2};
  int *ptr_fib = &fib[0];

  printf("1024 p8 = %d\n",sum_of_arithmic_progression(5, 1,0));
  printf("1024 is composed of %d digits\n",counts_of_digits(1024,0));
  printf("1024 p8 = %d\n",compute_fibonnaci(10,ptr_fib));
  printf("1024 p8 = %d\n",compute_sum_of_digits(1024,0));
  return SUCESSFULL_EXIT;
}

int   sum_of_arithmic_progression(int number, int p, int sum)
{
  if(number == 0)
    return sum;

  return sum_of_arithmic_progression((number-p), p, (sum+=number));
}


int   compute_fibonnaci(int index, int *result)
{
  if (index == 0)
   return *result;
  
  result[2] = result[1]+ result[0];
  result[0] = result[1];
  result[1] = result[2];
  
  return compute_fibonnaci(index-1, result);
}


int   compute_sum_of_digits(int number,int sum)
{
  if (number == 0)
    return sum;
  return compute_sum_of_digits((number/10),(sum += number%10));



}

int   counts_of_digits(int number,int count)
{
  if (number == 0)
    return count;
  return counts_of_digits((number/10), count+1);
}
