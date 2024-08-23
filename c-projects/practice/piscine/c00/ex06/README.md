| Title       | ft_print_comb2     |
| ----------- | ------------------ |
| File Type   | .c                 |
| Author      | Pierre Ollivier    |

### Assignment :
---

• Create a function that displays all different combination of two digits between 00 and 99, listed by ascending order.

• Here’s the expected output :

```Bash
$>./a.out | cat -e
00 01, 00 02, 00 03, 00 04, 00 05, ..., 00 99, 01 02, ..., 97 99, 98 99$>
```

• Here’s how it should be prototyped :

```C
void ft_print_comb2(void);
```

---

### Code Implementation :
---

```C

#include <unistd.h>

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j < 100)
		{
			write(1, &"0123456789"[(i / 10) % 10], 1);
			write(1, &"0123456789"[i % 10], 1);
			write(1, &" ", 1);
			write(1, &"0123456789"[(j / 10) % 10], 1);
			write(1, &"0123456789"[j % 10], 1);
			if (i == 98 && j == 99)
				break ;
			write(1, &", ", 2);
			++j;
		}
		++i;
	}
}

```

---

### Code description :
___

for more explaination refer to ex05 README.md

---
