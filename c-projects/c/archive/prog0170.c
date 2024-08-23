#include <stdio.h>

  int flag = 1;
  void PromptUserForInput();
  void GetUserInput();
  void CheckInputValidity(int userInput);
  void ComputeFactorialOf(int userInput, int sum);

  void PromptUserForInput(){
  printf("Enter an integer to compute it's factorial :\n");
  }

  void GetUserInput(){
    int userInput;
    flag = scanf("%i",&userInput);
    CheckInputValidity(userInput);
  }

  void CheckInputValidity(int userInput){
    if (userInput >= 1) {
      printf("The factorial of %i is : ",userInput);
      ComputeFactorialOf(userInput, 1);
    }else {
      GetUserInput();
    }
  }

  void ComputeFactorialOf(int userInput, int sum){
    if (userInput == 0){
      printf("%i\n",sum);
      return;
    }else {
      sum *= userInput;
      userInput = userInput -1;
      ComputeFactorialOf(userInput, sum);
    }
  }




int main(){

  PromptUserForInput();
  GetUserInput();

  return 0;
}
