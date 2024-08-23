#include <stdio.h>
#include <string.h>
_Bool  is_str_palindrome(char str[]); 

int main()
{
  char str[] = "aaabbbaaa";

  if (is_str_palindrome(str)) {

    printf("%s is a palindrome\n",str);
  
  }else {
  
    printf("%s is not a palindrome\n",str);

  }

  return 0;
}


_Bool   is_str_palindrome(char str[])
{
  _Bool is_palindrome;
  int count;
  int length;

  is_palindrome = 1;
  count = 0;
  length = strlen(str);

   for(count = 0; count < length/2; ++count)
    {

      if(str[count] != str[length-count-1])
        is_palindrome = 0;
         break;

    }

  return (is_palindrome);


}
