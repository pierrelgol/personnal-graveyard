| Title       | ft_print_comb.c    |
| ----------- | ------------------ |
| File Type   |                    |
| Author      | Pierre Ollivier    |

### Assignment :
---

• Create a function that displays all different combinations of three different digits in ascending order, listed by ascending order - yes, repetition is voluntary.

• 987 isn’t there because 789 already is.

• 999 isn’t there because the digit 9 is present more than once.

• Here’s the intended output :

```Bash
$>./a.out | cat -e
012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$>
```

• Here’s how it should be prototyped :

```C
void ft_print_comb(void);
```

---

### Code Implementation :
---

```C
#include <unistd.h>

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < 8)
	{
		j = i + 1;
		while (j < 9)
		{
			k = j + 1;
			while (k < 10)
			{
				write(1, &"0123456789"[i], 1);
				write(1, &"0123456789"[j], 1);
				write(1, &"0123456789"[k++], 1);
				if (!(i == 7 && j == 8 && k  10))
					write(1, &", ", 2);
			}
			++j;
		}
		++i;
	}
}


```

---

### Code description :
___

Combinatory is relatively easy to comprehend the requirements are to print
every combination of 3 digits in ascending order, such that no number is
made of the same digits twice.

The math are straight forward : nCr(n, r) = n! / (r! (n - r))!

nCr ---> the number of combinations without repetition
n   ---> the set of symbols available n = [0,1,2,3,4,5,6,7,8,9]
r   ---> the number of objects being selected or arrange r = 3.

since we don't want any repetition we know that every time we use one symbol
for our new arrangement that we are not going to be able to use it for the 
next digit so for example lets consider one combination will call it r[3].

if r[0] = '0';
that means that r[1] and r[2] can't be '0' as well so the amount of symbols
is now equal to n - 1 : [1,2,3,4,5,6,7,8,9].

then if r[1] = '1';
that means that r[2] can't be '0' or '1' so the amount of symbols
is now equal to n - 2 : [2,3,4,5,6,7,8,9].

so in our case to fair the correctness of our program we can calculate how 
many combination there is :	nCr(10, r) = 10! / (3! (10 - 3))!

nCr = (10!) / (3! * 7!)
nCr = (10 * 9 * 8) / (3 * 2 * 1)
nCr = 720 / 6
nCr = 120

so the program should generate 120 unique combination.

for this program we will use nested loop, the inner most loop will represent
the (n) the loop in between will represent (n - 1), and the outer most loop will represent (n - 2)

---
