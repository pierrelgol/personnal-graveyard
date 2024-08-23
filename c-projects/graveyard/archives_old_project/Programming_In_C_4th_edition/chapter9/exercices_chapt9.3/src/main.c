/*
 *
 *   Title of project : 
 *   Date of creation : 
 *   Author(s) : PierreLgol
 *   github : https://github.com/pierrelgol
 * 
 *   More on the project :
 *   
 *   #TODO(s) :  
 * 
 *
 */

//--------------------[     DEPENDENCIES DECLARATION     ]--------------------//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//--------------------[     MAIN METHOD     ]--------------------------------//

// Function to determine if a character is alphabetic
bool alphabetic(const char c) {
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || c == '\'')
    return true;
  else
    return false;
}

// Function to determine if a character is alphabetic
bool digit(const char c) {
  if ((c >= '0' && c <= '9') || (c == '.' || c == ',' ))
    return true;
  else
    return false;
}
/* Function to count the number of words in a string */
int countWords(const char string[]) {
  
  int i, wordCount = 0;
  bool lookingForWord = true, alphabetic(const char c);
  
  for (i = 0; string[i] != '\0'; ++i){
    
    if (alphabetic(string[i])) {
      
      if (lookingForWord) {
        ++wordCount;
        lookingForWord = false;
      }
    }else if (digit(string[i])) {
      
      if (lookingForWord) {
        ++wordCount;
        lookingForWord = false;
      }
    }else{ 
      lookingForWord = true;
    }
  }
  return wordCount;
}

int main(void) {
  const char text1[] = "Well, here goes."; // 3
  const char text2[] = "And here we go... again."; // 5 
  const char text3[] = "The day is the 13th of november."; // 7
  const char text4[] = "The result of the addition of 2 + 3,14 is 5,14"; // 12
  
  int countWords(const char string[]);
  printf("%s - words = %i\n", text1, countWords(text1));
  printf("%s - words = %i\n", text2, countWords(text2));
  printf("%s - words = %i\n", text3, countWords(text3));
  printf("%s - words = %i\n", text4, countWords(text4));
  
  return 0;
}
