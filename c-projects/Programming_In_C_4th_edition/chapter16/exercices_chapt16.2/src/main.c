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

//--------------------[     MAIN METHOD     ]--------------------------------//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct entry {
  const char *word;
  const char *definition;
};

int lookup(const struct entry dictionary[], const char search[],
           const int entries) {
  for (int i = 0; i < entries; i++) {
    if (strcmp(dictionary[i].word, search) == 0) {
      return i;
    }
  }
  return -1;
}

int main(int argc, char *argv[]) {
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

  int entries = 10;
  int entryNumber;

  if (argc != 2) {
    fprintf(stderr, "No word typed on the command line.\n");
    return EXIT_FAILURE;
  }

  entryNumber = lookup(dictionary, argv[1], entries);

  if (entryNumber != -1)
    printf("Definition: %s\n", dictionary[entryNumber].definition);
  else
    printf("Word not found in the dictionary.\n");

  return 0;
}
