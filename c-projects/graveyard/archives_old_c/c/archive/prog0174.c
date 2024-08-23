#include <stdio.h>

  void PromptUserForInput();
  char GetUserCharInput();
  int CharToInteger(char charInput);
  
  void PromptUserForInput(){
    printf("enter a char input\n");
  }

  char GetUserCharInput(){
    char charInput;
    scanf("%c",&charInput);
    return charInput;  
  }

  int CharToInteger(char charInput){
    if (charInput >= '0' && charInput <= '9') {
    return (int)(charInput - '0');
    }else {
      return -1;
    }

  }



int main(){

  char a, b ,c;
  int x, y, z;

    void PromptUserForInput();
    a = GetUserCharInput();
    void PromptUserForInput();
    b = GetUserCharInput();
    void PromptUserForInput();
    c = GetUserCharInput();

    x = CharToInteger(a);
    y = CharToInteger(b);
    z = CharToInteger(c);

  printf("a = %c | %i , b = %c | %i , c = %c | %i ,\n",a,x,b,y,c,z);
  
  return 0;
}
