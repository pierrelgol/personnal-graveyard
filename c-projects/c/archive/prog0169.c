#include <stdio.h>
  
  void PrintMaxMin(int max, int min);
  void GetMaxDigitFor(int input);
  _Bool IsTwoDigitNumber(int input);
  void PromptInputRequestMessage();
  void GetInput();

  void PrintMaxMin(int max, int min){
    printf("The Biggest digit is %i and the smallest is %i\n",max,min);
  }

  void GetMaxDigitFor(int input){
    int max_digit, min_digit;
    max_digit = ( ((input % 10) >= (input /10)) ? input % 10 : input / 10);
    min_digit = ( ((input % 10) <= (input /10)) ? input % 10 : input / 10);
    PrintMaxMin(max_digit, min_digit);
  }

  _Bool IsTwoDigitNumber(int input){
    return (input >= 10 && input <= 99);
  }

  void GetInput(){
  int input;
  scanf("%i",&input);
    
  if (IsTwoDigitNumber(input)){
      GetMaxDigitFor(input);
    }else {
    PromptInputRequestMessage();
    }
  }

  void PromptInputRequestMessage(){
    printf("Enter a two digit integer :\n");
    GetInput();
  }


int main(){

  PromptInputRequestMessage();

  return 0;
}
