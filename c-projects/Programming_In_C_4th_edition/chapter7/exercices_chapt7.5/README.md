# 5. The criteria used for termination of the loop in the squareRoot() function of Program 7.8 is not suitable

for use when computing the square root of very large or very small numbers.
Rather than comparing the difference between the value of x and the value of
guess2, the program should compare the ratio of the two values to 1. The closer
this ratio gets to 1, the more accurate the approximation of the square root.
Modify Program 7.8 so this new termination criteria is used.
