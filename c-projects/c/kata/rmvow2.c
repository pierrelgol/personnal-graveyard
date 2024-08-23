#include <stdio.h>
#include <stdlib.h>

//solution must allocate all required memory
//and return a free-able buffer to the caller.
char *disemvowel(const char *str)
{
  if ( !str ) return NULL;
  size_t str_len = 0;
  const char filter[10] = {'e','E','a','A','i','I','o','O','u','U'};
  for( const char *p = str; *p != '\0'; p++, str_len++);
  
  char *res = (char*) malloc( str_len + 1);
  if(!res) return NULL;
  
  const char *p = str, *end = str + str_len, *f  = filter, *fend = filter + 10;
  char *d = res;
  
  for ( ; p < end; p++ ){
    for ( f = filter ; (*f != *p) && f < fend ; f++ );
    if(f == fend)
      *d++ = *p;
  }
    
  *d = '\0';
  return res;
}

int main(void){

  char str[] = "This is a super way to see wether or not my algo is faster than the best one";
  int x = 1000000;
  
  while (x > 0){
    char *res = disemvowel(str);
    x--;
    free(res);
  }

  return 0;
}
