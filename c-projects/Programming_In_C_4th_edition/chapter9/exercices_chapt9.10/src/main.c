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

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//--------------------[     MAIN METHOD     ]--------------------------------//


// Program to use the dictionary lookup program
struct entry {
  char word[15];
  char definition[50];
};

bool equalStrings(const char s1[], const char s2[]) {
  int i = 0;
  bool areEqual;
  while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    ++i;
  if (s1[i] == '\0' && s2[i] == '\0')
    areEqual = true;
  else
    areEqual = false;
  return areEqual;
}
void dictionnarySort(const struct entry dictionary[], size_t n, bool ascending);

// function to look up a word inside a dictionary
int lookup(const struct entry dictionary[], const char search[],
           const int entries) {
  int i;
  bool equalStrings(const char s1[], const char s2[]);
  for (i = 0; i < entries; ++i)
    if (equalStrings(search, dictionary[i].word))
      return i;
  return -1;
}

int main(void) {
  const struct entry dictionary[100] = {
      {"aardvark", "a burrowing African mammal"},
      {"abyss", "a bottomless pit"},
      {"acumen", "mentally sharp; keen"},
      {"addle", "to become confused"},
      {"aerie", "a high nest"},
      {"affix", "to append; attach"},
      {"agar", "a jelly made from seaweed"},
      {"ahoy", "a nautical call of greeting"},
      {"aigrette", "an ornamental cluster of feathers"},
      {"ajar", "partially opened"}};
  char word[10];
  int entries = 10;
  int entry;
  
  int lookup(const struct entry dictionary[], const char search[],
             const int entries);
  printf("Enter word: ");
  scanf("%9s", word);
  entry = lookup(dictionary, word, entries);
  
  if (entry != -1)
    printf("%s\n", dictionary[entry].definition);
  else
    printf("Sorry, the word %s is not in my dictionary.\n", word);
  return 0;
}

void dictionarySort(struct entry dictionary[], size_t n, bool ascending) {
    size_t i, j;
  
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(dictionary[j].word, dictionary[j + 1].word) > 0) {
                // Swap the entries if they are in the wrong order
                struct entry temp = dictionary[j];
                dictionary[j] = dictionary[j + 1];
                dictionary[j + 1] = temp;
            }
        }
    }
}
