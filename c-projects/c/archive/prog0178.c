#include <stdio.h>

int GetNumberLength(int number);
int Pow(int x, int y);
_Bool IsArmstrong(int number);



int main (int argc, char *argv[])
{
  for (int i = 0; i <= 200; i++) {
    printf((IsArmstrong(i) ? "%i = true\n" : "%i = false\n"),i );
  }
  return 0;
}

int GetNumberLength(int number){
  int count;
  for ( count = 0; number != 0; count++) {
    number = number / 10;
  }
  return (count);
}

int Pow(int x, int y){
  int pow = 1;
  if (x == 0)
    return x;
  for (int i = 0; i < y; i++) {
      pow *= x;
  }
  return (pow);
}

_Bool IsArmstrong(int number){
  int length = GetNumberLength(number);
  int potentialArmstrong = number, sum = 0;
  while (potentialArmstrong != 0) {
    sum += Pow((potentialArmstrong % 10),length);
    potentialArmstrong /= 10;
  }
  return (sum == number);

}


