#include <stdio.h>

void GetLengthOfInteger(int user_input);
void PrintDummyLength(int input_length);
void PromptUserInputRequestMessage();
void GetUserInput();


void PromptUserInputRequestMessage(){
  printf("Enter an integer\n");
  GetUserInput();
}
void GetUserInput(){
  int user_input;
  scanf("%i",&user_input);
  GetLengthOfInteger(user_input);
}

void GetLengthOfInteger(int user_input){
  int input_length = 0;
  while (user_input != 0) {
    ++input_length;
    user_input /= 10;
  }
  PrintDummyLength(input_length);
}

void PrintDummyLength(int input_length){
  int dummy9 = 9;
  do{
    dummy9 *= 10;
    dummy9 += 9;
    input_length--;
  }while (input_length != 1);
  printf("the number is of length %i\n",dummy9);
}

int main(){
  PromptUserInputRequestMessage();
  return 0;
}
