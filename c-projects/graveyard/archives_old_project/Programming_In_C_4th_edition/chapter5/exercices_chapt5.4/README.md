# 4. Write a program that acts as a simple “printing” calculator. The program should allow the user to type in expressions of the form
```C
*number* *operator*
```
The following operators should be recognized by the program:


```C
+     -     *     /     S     E

```

The S operator tells the program to set the “accumulator” to the typed-
in number. The E operator tells the program that execution is to end. The
arithmetic operations are performed on the contents of the accumulator with
the number that was keyed in acting as the second operand. The following is a
“sample run” showing how the program should operate:


```C
Begin Calculations

10 S           Set Accumulator to 10
= 10.000000    Contents of Accumulator
2 /            Divide by 2
= 5.000000     Contents of Accumulator
55 -           Subtract 55
-50.000000
100.25 S       Set Accumulator to 100.25
= 100.250000
4 *            Multiply by 4
= 401.000000
0 E            End of program
= 401.000000

End of Calculations.

```

Make certain that the program detects division by zero and also checks for
unknown operators.
