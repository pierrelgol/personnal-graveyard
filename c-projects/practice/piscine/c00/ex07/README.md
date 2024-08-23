| Title       | ft_putnbr          |
| ----------- | ------------------ |
| File Type   |                    |
| Author      | Pierre Ollivier    |

### Assignment :
---

• Create a function that displays the number entered as a parameter. The function has to be able to display all possible values within an int type variable.

• Here’s how it should be prototyped :

```C
void ft_putnbr(int nb);
```

• For example:
◦ ft_putnbr(42) displays "42".

---

### Code Implementation :
---

```C

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	*ch;
	long	n;
	int		i;

	ch = (char [13]){0};
	n = nb;
	if (n <= 0)
	{
		if (n == 0)
			write(1, &"0", 1);
		else
		{
			write(1, &"-", 1);
			n *= -1;
		}
	}
	i = 0;
	while (n > 0)
	{
		ch[i++] = "0123456789"[(n % 10)];
		n = n / 10;
	}
	while (i > 0)
		write(1, &ch[--i], 1);
}

```

---

### Code description :
___

For this program we will use a simple technique to isolate every digits
one by one, first we create a zeroed array that will be used to store our
ASCII representation for the conversion process. 

We assign n to a larger value to handle the INT_MIN/MAX case, we check to see
if n is equal to zero of if n is negative, 
if n is zero we simply write "0" to stdout.
if n is negative we multiply by -1 to get the absolute value.
As negative values would, not meet the condition of the following while loop.

In this while loop we will itterate until n is equal to zero, in each iteration
we simply use the `%` operator to isolate the last digit in n, we use that value
to index our string literal and store the result in ch at index i and increment i.
we divide n by 10 and store the result inside n.

finally we print our result in reverse as the number stored inside ch is reversed.

---
