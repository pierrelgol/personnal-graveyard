#include <stdio.h>

void promptinputrequestmessage();
void getusercharinput();
char getchartolowercase(char charinput);
char getchartoupercase(char charinput);

  void promptinputrequestmessage(){
    printf("enter a char input\n");
    getusercharinput();
  }

  void getusercharinput(){
    char charinput;
    scanf("%c",&charinput);
    char lowercasechar = getchartolowercase(charinput);
    char upercasechar = getchartoupercase(charinput);
    printf("charinput = %c | lowercasechar = %c | upercasechar = %c\n",charinput,lowercasechar,upercasechar);
}

  char getchartolowercase(char charinput){
    if (charinput >= 65 && charinput <= 90) {
      charinput = ('a' + (charinput - 'a'));
      return charinput;
    }else if (charinput >= 97 && charinput <= 122) {
     return charinput;
    }else {
      printf("not a letter ! try again :\n");
      getusercharinput();
    }
    return -1;
  }

  char getchartoupercase(char charinput){
    if (charinput >= 97 && charinput <= 122) {
      charinput = ('z' + (charinput - 'z'));
      return charinput;
    }else if (charinput >= 65 && charinput <= 90) {
     return charinput;
    }else {
      printf("not a letter ! try again :\n");
      getusercharinput();
    }
    return -1;
  }

int main(){

  promptinputrequestmessage();

  return 0;
}
