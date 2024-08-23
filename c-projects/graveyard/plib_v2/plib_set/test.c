#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	double x;
	double y;
} foo;

typedef struct
{
	double area;
	double x;
	double y;
} bar;

void	from_foo_to_bar1(foo *f, bar *b)
{
	*b = (bar){.area = f->x * f->y, .x = f->x, .y = f->y,};
}

bar *from_foo_to_bar2(foo *f)
{
	bar *b = malloc(sizeof(bar));
	*b = (bar){.area = f->x * f->y, .x = f->x, .y = f->y,};
	return (b);
}

int	main(void)
{
	foo *f;
	bar *b;

	f = malloc(sizeof(foo));
	b = malloc(sizeof(bar));

	f->x = 5;
	f->y = 1;
	from_foo_to_bar1(f, b);
	free(b);
	b = from_foo_to_bar2(f);

	

	return (0);
}
