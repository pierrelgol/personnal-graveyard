#include <stdio.h>

int main(){

  int grade1 = 0, grade2 = 0;
  int *p_grade1 = &grade1, *p_grade2 = &grade2;

  printf("grade1 = %x\n",&grade1);

  printf("grade2 = %x\n",&grade2);

  printf("p_grade1 = %p\n",p_grade1);

  printf("p_grade2 = %p\n",p_grade2);


  return 0;
}
