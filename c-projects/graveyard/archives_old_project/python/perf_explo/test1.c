#include <ctype.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

#define NUMBER_OF_LETTERS_IN_ALPHABET 26

bool is_pangram(const char *str, size_t len);

int main(void) {

  char strg1[] = "abcdefghijklmnopqrstuvwxyz";
  char strg2[] = "abcdefghijklmnopqrstuvwxy";
  char strg3[] = "abcd/34m,m,efghijkl,./mnopqr/,stuvwxgryz,";
  char strg4[] = "a b c d e f g h i j k l m n o p q r s t u v w x y z";
  printf("strg1 = %s, is made of alpha = %s\n", strg1,
         (is_pangram(strg1, 26) == true ? "True" : "False"));
  printf("strg2 = %s, is made of alpha = %s\n", strg2,
         (is_pangram(strg2, 25) == true ? "True" : "False"));
  printf("strg3 = %s, is made of alpha = %s\n", strg3,
         (is_pangram(strg3, 40) == true ? "True" : "False"));
  printf("strg4 = %s, is made of alpha = %s\n", strg4,
         (is_pangram(strg4, 50) == true ? "True" : "False"));

  return 0;
}

bool is_pangram(const char *str, size_t len) {
  if (!str) {
    return false;
  } else if (len < NUMBER_OF_LETTERS_IN_ALPHABET) {
    return false;
  }

  size_t alpha_count[NUMBER_OF_LETTERS_IN_ALPHABET] = {0}, i = 0;
  char buffer[len];
  
  for (i = 0; i < len; i++) {
    buffer[i] = str[i];
    if (isalpha(buffer[i])) {
      if (isupper(buffer[i])) {
        buffer[i] = (buffer[i] - 'A') + 'a';
      }
      alpha_count[buffer[i] - 'a']++;
    }
  }

  for (i = 0; i < NUMBER_OF_LETTERS_IN_ALPHABET;) {
    if (alpha_count[(i++)] == 0) {
      return false;
    }
  }
  return true;
}
