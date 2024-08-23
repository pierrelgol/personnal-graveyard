# 6. Write a function called bitpat_search() that looks for the occurrence of a specified pattern of bits inside an unsigned int. The function should take three arguments and should be called as shown:

```C
bitpat_search (source, pattern, n)
```
The function searches the integer source, starting at the leftmost bit, to see
if the rightmost n bits of pattern occur in source. If the pattern is found,
have the function return the number of the bit at which the pattern begins,
where the leftmost bit is bit number 0. If the pattern is not found, then have
the function return −1. So, for example, the call

```C
index = bitpat_search (0xe1f4, 0x5, 3);
```

causes the bitpat_search() function to search the number 0xe1f4 ( = 1110 0001
1111 0100 binary ) for the occurrence of the three-bit pattern 0x5 (= 101
binary). The function returns 11 to indicate that the pattern was found in the
source beginning with bit number 11.” Make certain that the function makes no
assumptions about the size of an int (see exercise 3 in this chapter).