| Title       | ft_print_numbers.c |
| ----------- | ------------------ |
| File Type   | .c                 |
| Author      | Pierre Ollivier    |

### Assignment :
---

• Create a function that displays all digits, on a single line, by ascending order.

• Here’s how it should be prototyped :

```C
void ft_print_numbers(void);
```

---

### Code Implementation :
---

```C

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	ch;

	ch = '0';
	while (ch <= '9')
	{
		write(1, &ch, 1);
		++ch;
	}
}

```

---

### Code description :
___

similar explanation for this exercise than for ex01. [1]

[1]: https://github.com/pierrelgol/42_2023/tree/main/piscine/c00/ex01

---
