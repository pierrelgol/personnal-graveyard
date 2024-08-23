# 8. Write a function called bitpat_set() to set a specified set of bits to a particular value. The function should take four arguments: a pointer to an unsigned int in which the specified bits are to be set; another unsigned int containing the value to which the specified bits are to be set, right adjusted in the unsigned int; a third int that specifies the starting bit number (with the leftmost bit numbered 0); and a fourth int specifying the size of the field. So the call :
```C
bitpat_set (&x, 0, 2, 5);
```
has the effect of setting the five bits contained in x, beginning with the third
bit from the left (bit number 2), to 0. Similarly, the call
```C
bitpat_set (&x, 0x55u, 0, 8);
```
sets the eight leftmost bits of x to hexadecimal 55. Make no assumptions about
the particular size of an int (refer to exercise 3 in this chapter).
