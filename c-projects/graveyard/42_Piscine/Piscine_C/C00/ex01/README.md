| Title       | ft_print_alphabet.c |
| ----------- | ------------------- |
| File Type   | .c                  |
| Author      | Pierre Ollivier     |

### Assignment :
---

• Create a function that displays the alphabet in lowercase, on a single line, by ascending order, starting from the letter ’a’.

• Here’s how it should be prototyped :

```C
void ft_print_alphabet(void);
```

---

### Code Implementation :
---

```C

#include <unistd.h> 

void	ft_print_alphabet(void)
{
	char	ch;

	ch = 'a';

	while (ch <= 'z')
	{
		write(1, &ch, 1);
		++ch;
	}
}

```

---

## Code description
---

This code is also quite to understand once we understand how C represent
different data types, C was invented at a time where resources were very
limited, and the language reflect that perfectly as there is no fluff at all.
In C every data type is really just an integer, in the ASCII table we can see that the alphabet for lowercase letters start at 97 (aka 'a')
and finish at 122 (aka 'z') so we can use the pre-increment operators (++) to
increase the value stored in ch by one at each iteration which will produce

abcd...xyz

---
