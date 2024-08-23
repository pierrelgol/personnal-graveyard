
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

#define TABLE_SIZE 20

typedef struct Entry_t{
  char* str;
  char value;
}Entry_t;

Entry_t table[TABLE_SIZE];

Entry_t zero  = {"zero", '0'};
Entry_t one   = {"one",  '1'};
Entry_t two   = {"two",  '2'};
Entry_t three = {"three",'3'};
Entry_t four  = {"four", '4'};
Entry_t five  = {"five", '5'};
Entry_t six   = {"six",  '6'};
Entry_t seven = {"seven",'7'};
Entry_t eight = {"eight",'8'};
Entry_t nine  = {"nine", '9'};

char table_search(char *str);

int main(void){

  table[0] = zero;
  table[1] = one;
  table[2] = two;
  table[3] = three;
  table[4] = four;
  table[5] = five;
  table[6] = six;
  table[7] = seven;
  table[8] = eight;
  table[9] = nine;

  Entry_t test = {"three",0};
  printf("test = %d\n",table_search(test.str) - '0');
  
  return EXIT_SUCCESS;
}
char table_search(char *str){
  char res = '\0';
  size_t i = 0;
  size_t cmpres = 0;

  for( ; i < TABLE_SIZE; i++ ){
    if(strcmp(str,table[i].str) == 0){
      res = table[i].value;
      return res;
    }
  }
  return 0;
}
