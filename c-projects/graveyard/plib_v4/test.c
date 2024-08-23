#include "plib.h"
#include <printf.h>



int	main(void)
{
	char *test = "this is avery long string ";
	char *p = string_duplicate(test);
	char *old = "avery";
	char *new = "a very";
	string_substring_replace(p, old, new);
	printf("%s",p);

	return (0);
}
