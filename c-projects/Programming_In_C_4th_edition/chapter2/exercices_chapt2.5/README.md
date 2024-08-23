# 5. Identify the syntactic errors in the following program. Then type in and run the corrected program to ensure you have correctly identified all the mistakes.
```C
#include <stdio.h>

int main (Void) //<- Void should be 'void'
( //<- should be curly brace
 INT sum; //<- INT should be int.
 /* COMPUTE RESULT //<- Multiline comment is not closed, and not appropriate for the length of the message.
 sum = 25 + 37 - 19 //<- Missing semi colon.
 /* DISPLAY RESULTS // <- Multiline comment is not closed, and not appropriate for the length of the message.
 printf ("The answer is %i\n" sum); //<- Missing ',' before sum.
 return 0;
}
```
# Corrected version.
```C
#include <stdio.h>
int main (void)
{  
 int sum;

 //COMPUTE RESULT
 sum = 25 + 37 - 19;
 
 //DISPLAY RESULTS
 printf("The answer is %i\n",sum);

 return 0;
}
```
