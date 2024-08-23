# 9. The least common multiple (lcm) of two positive integers u and v :
is the smallest positive integer that is evenly divisible by both u and v. Thus,
the lcm of 15 and 10, written lcm (15, 10), is 30 because 30 is the smallest
integer divisible by both 15 and 10. Write a function lcm() that takes two
integer arguments and returns their lcm. The lcm() function should calculate
the least common multiple by calling the gcd() function from Program 7.6 in
accordance with the following identity:
```C
lcm (u, v) = uv / gcd (u, v)        u, v >= 0
```
