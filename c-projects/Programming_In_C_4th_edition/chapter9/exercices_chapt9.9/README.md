# 9. You can extend even further the usefulness of the replaceString() function

from the preceding exercise if you have it return a value that indicates whether
the replacement succeeded, which means that the string to be replaced was found
inside the source string. So, if the function returns true if the replacement
succeeds and false if it does not, the loop
```C
do {
      stillFound = replaceString (text, " ", "");
   } while ( stillFound );
```
could be used to remove all blank spaces from text, for example. Incorporate
this change into the replaceString() function and try it with various character
strings to ensure that it works properly.”

