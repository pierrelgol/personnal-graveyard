#include <stdio.h>

void PromptInputMessageRequest();
void GetUsrInput();
void PromptErrorInputMessage();
void CopyNumberInArray(int usr_input);
_Bool isPalindromeArray(int number[]);


#define SIZE 7

int main(){

  PromptInputMessageRequest();

  return 0;
}

  void PromptInputMessageRequest(){
    printf("Enter a %i digit number\n",SIZE);
    GetUsrInput();
  }

  void GetUsrInput(){
    int usr_input;
    scanf("%i",&usr_input);
    if (usr_input != 0 && usr_input <= 9999999) {
      CopyNumberInArray(usr_input);
    }else {
      PromptErrorInputMessage();
    }
  }

  void PromptErrorInputMessage(){
    printf("The input number must be %i digit ! try again :\n",SIZE);
    GetUsrInput();
  }

  void CopyNumberInArray(int usr_input){
    int number[SIZE] = {0};
    for (int i = 0; i < SIZE; i++) {
      number[i] = usr_input % 10;
      usr_input /= 10;
    }
    if(isPalindromeArray(number)){
      printf("The number is a palindrome\n");
    }else {
      printf("The number is not a palindrome\n");
    }

}

  _Bool isPalindromeArray(int number[]){
    _Bool flag = 1;
    for ( int i = 0; i < SIZE/2; ++i) {
      if (number[i] != number[SIZE-1-i]) {
        flag = 0;
      }
    }
  return flag;
}

