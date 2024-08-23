#include <stdio.h>

int GetNumberOfWordInString(char str[]);
int GetStringLength(char str[]);

int main() {

  char str[] = "Hello World!";

  printf("%s is %i char long with %i words\n", str, GetStringLength(str),
         GetNumberOfWordInString(str));
  return 0;
}

int GetStringLength(char str[]) {
  int count = 0;
  _Bool flag = 1;

  while (flag) {
    count++;
    flag = ((str[count] == '\0') ? 0 : 1);
  }

  return (count);
}
int GetNumberOfWordInString(char str[]) {
  int word_count = 1, i;

  for (i = 0; i < GetStringLength(str); i++) {
    if (str[i] == ' ')
      word_count++;
  }
  return (word_count);
}
