| Title       | ft_print_reverse_alphabet.c |
| ----------- | --------------------------- |
| File Type   | .c                 					|
| Author      | Pierre Ollivier    					|

### Assignment :
---

• Create a function that displays the alphabet in lowercase, on a single line, by descending order, starting from the letter ’z’.

• Here’s how it should be prototyped :

```C
void ft_print_reverse_alphabet(void);
```

---

### Code Implementation :
---

```C

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	ch;

	ch = 'z';
	while (ch >= 'a')
	{
		write(1, &ch, 1);
		--ch;
	}
}

```

---

## Code description :
---

similar explanation for this exercise than for the previous one.[1]

[1]: https://github.com/pierrelgol/42_2023/tree/main/piscine/c00/ex01

---
