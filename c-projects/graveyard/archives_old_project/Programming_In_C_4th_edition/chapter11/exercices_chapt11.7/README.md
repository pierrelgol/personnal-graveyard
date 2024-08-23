# 7. Write a function called bitpat_get() to extract a specified set of bits. Have it take three arguments: the first an unsigned int, the second an integer starting bit number, and the third a bit count. Using the convention that bit numbering starts at 0 with the leftmost bit, extract the specified number of bits from the first argument and return the result. So the call :
```C
bitpat_get (x, 0, 3)
```
extracts the three leftmost bits from x. The call
```C
bitpat_get (x, 3, 5)
```
extracts five bits starting with the fourth bit in from the left.