# 2. Why could you have replaced the while statement of the equalStrings() function of Program 9.4 with the statement

```C

 while ( s1[i] == s2[i] && s1[i] != '\0' )

```
 
# to achieve the same results?

```C
because the original loop 
 while ( s1[i] == s2[i] && s1[i] != '\0' s2[i] != '\0'){
  i++;
}
checks if s2[i] != '\0', the reason being that we don't want the program to terminate by trying to access an array of character out of bound.
The reason why it's not useful to check for s2[i] is that if the loop terminates when reaching the null character in s1[i] then we know that in
order for the string to be equal s2[i] has to be also null terminated, meaning that if it's not that means that the string aren't the same. and
if it is that mean that both string are of the same length.
``` 