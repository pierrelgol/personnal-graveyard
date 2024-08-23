#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define ERROR_CODE_NULL_SOURCE 0
#define ERROR_CODE_MALLOC_FAIL 1
#define NUMBER_OF_TOKEN = 22

const char token[] = {"zero#one#two#three#four#five#six#seven#eight#nine#ten#twenty#thirty#forty#fithty#sixty#seventy#eighty#ninety#hundred#thousand#million#"};
const char look_up[][16] = {"0","1","2","3","4","5","6","7","8","9","10","100","1000000",};

long parse_int (const char* number) {
  if(!number) return ERROR_CODE_NULL_SOURCE;
  size_t src_len = 0;
  size_t token_count = 1;
  long int result = 0;
  char *numcpy = NULL;

  //local strlen()
  for( const char* p = number; *p != '\n'; p++, src_len++ );

  //copy source string;
  numcpy = (char*) malloc( src_len + 1);
  if ( !numcpy ) return ERROR_CODE_MALLOC_FAIL;
  memcpy(numcpy,number,src_len + 1);
  assert(numcpy[src_len + 1] == '\n');

  //searching for token
  for ( size_t i = 0; numcpy[i] != '\n'; i++ ){

    size_t token_start = i;
    size_t token_end = 0;
    size_t token_len = 0;
    size_t token_seen = 0;
    size_t isfound = 0;
    size_t count = 0;
    
    for ( size_t j = i; numcpy[j] != '\n'; j++ ){
      if ( numcpy[j] == ' ' || numcpy[j] == '-'){
        token_end = j;
        break;
      }
    }
    token_len = token_end - token_start;
    
    
    for( size_t k = 0, l = 0; token[k] != '\n'; k++  ){
      if(token[k] == '#') token_seen += 1;
      
      while(token[k] == numcpy[l]){
        count++;
      }

      if(count == token_len) break;
    }
    
  }

   
  return 0;
}

int main(){


 return EXIT_SUCCESS;
}