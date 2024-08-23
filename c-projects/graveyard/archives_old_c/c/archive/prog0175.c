#include <stdio.h>

void PromptUserForInput();
void RecordUserInput();
void ComputeAverage(int sumOfDigit, int numberOfDigitInSum);
void ComputeSumOfDigit(int parsedNumber);
void RemoveDigitBelowBound(int number, int digit);

int main(){

  PromptUserForInput();

  return 0;
}


void PromptUserForInput(){
  printf("Enter a number and a set the bound of the average with a digit :\n");
  RecordUserInput();
}
void RecordUserInput(){
  int number, bound;
  scanf("%i %i",&number,&bound);
  RemoveDigitBelowBound(number,bound);
}

void RemoveDigitBelowBound(int number, int digit){
  int parsedNumber = 0;
  do{
      if (number % 10 < digit) {
        parsedNumber += number % 10;
        parsedNumber *= (number / 10 == 0 ? 1 : 10);
      } 
      number /= 10;
    }while (number != 0);
  ComputeSumOfDigit(parsedNumber);
}


void ComputeSumOfDigit(int parsedNumber){
  int numberOfDigitInSum = 0, sumOfDigit = 0;
   do {
        sumOfDigit += parsedNumber % 10;
        parsedNumber /= 10;
        numberOfDigitInSum += 1;
      }while (parsedNumber != 0); 
  ComputeAverage(sumOfDigit,numberOfDigitInSum);
}

void ComputeAverage(int sumOfDigit, int numberOfDigitInSum){
  float average = sumOfDigit / (float) numberOfDigitInSum;
  printf("%f\n",average);
}
