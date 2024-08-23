| Title       | ft_putchar.c       |
| ----------- | ------------------ |
| File Type   | .c                 |
| Author      | Pierre Ollivier    |

### Assignment :
---

• Write a function that displays the character passed as a parameter.

• It will be prototyped as follows :

```C
void ft_putchar(char c);
```

---

### Code Implementation :
---

```C

#include <unistd.h> 

void	ft_putchar(char c)
{
  write(1, &c, 1);
}

```

---

### Code description :
___

This code is quite simple, we include the correct header, and pass the value of
c to write by using the address operator in C : `&`

---
