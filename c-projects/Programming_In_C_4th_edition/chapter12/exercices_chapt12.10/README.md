# 10. Consider the definition of the printint macro from this chapter:
```C
#define printint(n)  printf ("%i\n", x ## n)
```
Could the following be used to display the values of the 100 variables x1–x100? Why or why not?

```C
for (i = 1; i < 100; ++i)     printx (i);
```