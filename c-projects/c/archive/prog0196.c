#include <stdio.h>
#include <string.h>

int   mystrlen(char str[]);
int   mystrcmp(char that[], char to[]);
void  mystrcpy(char from[], char to[]);
char  to_lower_case(char ch);

#define EXIT_SUCCESS 0

int main(void) 
{

  char str_0[] = "Hello World";
  char str_1[] = "Hello";
  char str_2[] = "World";
  char str_3[16];

  printf("%s\n",str_0);
  printf("%s compare to %s = %d\n",str_1,str_2,mystrcmp(str_1, str_2));
  mystrcpy(str_1, str_3);
  printf("%s : %s\n",str_1,str_3);
  printf("%s is %d long\n",str_1,mystrlen(str_1));
  printf("\n");

  return EXIT_SUCCESS;
}


char  to_lower_case(char ch)
{
  
    if (ch >= 'a' && ch <= 'z')
      return (ch);
    
    if (ch >= 'A' && ch <= 'Z')
      return ('a'+ (ch - 'A'));

  return -1;
}

int   mystrlen(char str[])
{
  int length;
  _Bool flag_null;
 
  flag_null = 0;

    for(length = 1; flag_null == 0; ++length )
    {
      if (str[length] == '\0')
        break;
    }

  return (length);
}


int   mystrcmp(char that[], char to[])
{
  int i;
  _Bool flag;

  flag = 1;

    for (i = 0; flag == 1; ++i ) 
    {
      if (that[i] == '\0' || to[i] == '\0')
        flag = 1;

      if (to_lower_case(that[i]) > to_lower_case(to[i]))
        return -1;
      if (to_lower_case(that[i]) < to_lower_case(to[i]))
        return 1;

    }

  return 0;
}


void  mystrcpy(char from[], char to[])
{
  int i;

  for (i = 0; from[i] != '\0'; i++)
  {
    to[i] = from[i];
  }

  to[i+1] = '\0';

}
