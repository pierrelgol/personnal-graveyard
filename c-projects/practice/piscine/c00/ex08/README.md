| Title       | ft_print_combn     |
| ----------- | ------------------ |
| File Type   | .c                 |
| Author      | Pierre Ollivier    |

### Assignment :
---

• Create a function that displays all different combinations of n numbers by ascending order.

• n will be so that: 0 < n < 10.

• Here’s how it should be prototyped :

```C
void ft_print_combn(int n);
```

• If n = 2, here’s the expected output :

```Bash
$>./a.out | cat -e
01, 02, 03, ..., 09, 12, ..., 79, 89$>
```


---

### Code Implementation :
---

```C

#include <unistd.h>

static void	ft_print_number(int *num, int depth)
{
	int		i;
	char	ch;

	i = 0;
	while (i < depth)
	{
		ch = num[i++] + '0';
		write(1, &ch, 1);
	}
	if (num[0] != 10 - depth)
		write(1, ", ", 2);
}

static void	ft_compute_combn(int *num, int final_depth, int current_depth, int prev_i)
{
	int	i;

	if (current_depth == final_depth)
	{
		print_number(num, final_depth);
		return ;
	}
	i = prev_i + 1;
	while (i < 10)
	{
		num[current_depth] = i;
		ft_compute_combn(num, final_depth, current_depth + 1, i);
		i++;
	}
}

void	ft_print_combn(int n)
{
	if (n >= 1 && n <= 9)
		ft_compute_combn((int [9]){0}, n, 0, -1);
}

```

---

### Code description :
___

This code was quite hard to make, I was already familiar with recursion and
I was comfortable enough to use it in some areas, but this was tough, it
definitely made me reconsider my understanding of recursion.

The trick I've found is to think of the value n as a `depth`. In practice
we know from combinatory that if we have a set of size n, and want to produce
every combination without repetition that every time n increase the nth digit
will have n-1 element to use from the set of symbols.

so if n is equal 4 and we have 10 symbols at our disposal namely (0123456789)

we know that the last digit will be capable of representing every symbols in 
the set, the 3rd digit only number from (0 through 8), second (0 through 7)
first (0 through 6).

so in the code this is translated by the fact that n represent the `final_depth`
and to correctly represent the range we pass the previous value of i called
`prev_i` and add 1 to it to avoid overlap, every time the functions is calling 
itself it increase the depth, which than sort of backtrack into the while loop
to recursively call itself again until it has generated every combination for n.

---
