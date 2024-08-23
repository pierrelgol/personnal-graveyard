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
#include <assert.h>

//--------------------[     MAIN METHOD     ]--------------------------------//

int compareStrings(const char *s1, const char *s2);

#define STR_SIZE 20

int main() {

  char str1[STR_SIZE] = {"This is a test"};
  char str2[STR_SIZE] = {"This is a test"};
  char str3[STR_SIZE] = {"str3 is before str4a"};
  char str4[STR_SIZE] = {"str3 is before str4b"};
  char str5[STR_SIZE] = {"str6 is before str5b"};
  char str6[STR_SIZE] = {"str6 is before str5a"};

  assert( 0 == compareStrings(str1,str2));
  printf("test............................................................Pass\n");
  assert(-1 == compareStrings(str3,str4));
  printf("test............................................................Pass\n");
  assert( 1 == compareStrings(str5,str6));
  printf("test............................................................Pass\n");
  
  return EXIT_SUCCESS;
}

int compareStrings(const char *s1, const char *s2) {
  int cmptotal = 0;
  const char *ps1 = s1, *ps2 = s2;
  while (*ps1 == *ps2 && *(ps1++) != '\0' && *(ps2++) != '\0') {
    cmptotal += ( *ps1 < *ps2 ? -1 : (*ps1 == *ps2 ? 0 : 1 ));
    if(cmptotal != 0)
      return cmptotal;
  }
  return 0;
}
