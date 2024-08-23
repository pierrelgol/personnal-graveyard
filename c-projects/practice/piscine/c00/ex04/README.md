| Title       | ft_is_negative     |
| ----------- | ------------------ |
| File Type   | .c                 |
| Author      | Pierre Ollivier    |

### Assignment :
---

• Create a function that displays ’N’ or ’P’ depending on the integer’s sign entered as a parameter. If n is negative, display ’N’. If n is positive or null, display ’P’.

• Here’s how it should be prototyped :

```C
void ft_is_negative(int n);
```

---

### Code Implementation :
---

```C

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}

```

---

### Code description :
___

For this exercise, we simply use the comparaison operator `<` to determine
whether or not n is less than zero or not if it is we print `N` else we 
print `P`.

---
