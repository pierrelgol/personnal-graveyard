# “8. Using the findString(), removeString(), and insertString() functions from preceding exercises, write a function called replaceString() that takes three character string arguments as follows
```C
replaceString (source, s1, s2);
```
and that replaces s1 inside source with the character string s2. The function
should call the findString() function to locate s1 inside source, then call
the removeString() function to remove s1 from source, and finally call the
insertString() function to insert s2 into source at the proper location. So, the
function call replaces the first occurrence of t”
```C
replaceString (text, "1", "one");
```
“replaces the first occurrence of the character string "1" inside the character
string text, if it exists, with the string "one". Similarly, the function call
```C
replaceString (text, "*", "");
```
has the effect of removing the first asterisk inside the text array because the
replacement string is the null string.”