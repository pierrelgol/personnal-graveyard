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

#include <assert.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

//--------------------[     MAIN METHOD     ]--------------------------------//

#define BUFF_SIZE 256
void merge_lines(const char *file1, const char *file2) {
  FILE *out = stdout;
  FILE *fp1 = fopen(file1, "r");
  FILE *fp2 = fopen(file2, "r");
  char line1[BUFF_SIZE], line2[BUFF_SIZE];
  bool fp1_isHot = true, fp2_isHot = true;

  if (fp1 == NULL || fp2 == NULL) {
    printf("Error opening files\n");
    return;
  }

  while (fp1_isHot && fp2_isHot) {
    if (fgets(line1, BUFF_SIZE, fp1) == NULL) {
      fp1_isHot = false;
    } else {
      fprintf(out, "%s", line1);
    }

    if (fgets(line2, BUFF_SIZE, fp2) == NULL) {
      fp2_isHot = false;
    } else {
      fprintf(out, "%s", line2);
    }
  }

  if (fp1_isHot) {
    while (fgets(line1, BUFF_SIZE, fp1) != NULL) {
      fprintf(out, "%s", line1);
      fprintf(out, "%s", line2);
    }
  } else {
    while (fgets(line2, BUFF_SIZE, fp2) != NULL) {
      fprintf(out, "%s", line1);
      fprintf(out, "%s", line2);
    }
  }

  fclose(fp1);
  fclose(fp2);
}

int main() {
  const char *file1 = "file1";
  const char *file2 = "file2";
  merge_lines(file1, file2);

  return 0;
}
