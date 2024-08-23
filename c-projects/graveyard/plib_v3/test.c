#include "plib.h"
#include <stddef.h>
#include <stdio.h>
#include <time.h>

#include <stdlib.h>

#define POOL_SIZE 4096

char  memory_pool[POOL_SIZE];
char *bump_ptr = memory_pool;

void bump_free(void **ptr)
{	
	*ptr = NULL;
	bump_ptr = memory_pool;
}
void *bump_alloc(size_t size)
{
	if (bump_ptr + size <= memory_pool + POOL_SIZE)
	{
		char *allocated = bump_ptr;
		bump_ptr += size;
		return allocated;
	}
	else
	{
		return NULL;
	}
}

char *plib_testing_string_generator1(char *set, int length)
{
	char *result;
	int   i;
	int   ch;

	result = bump_alloc(length);
	i = 0;
	while (i < length)
	{
		ch = rand() % 255;
		while (set[ch] == 0)
			ch = rand() % 255;
		result[i++] = ch;
	}
	return (result);
}

int main(void)
{
	char   *set = plib_char_boolset_create_from((char[255]){0}, ALNUM);
	char  **split;
	clock_t start;
	clock_t end;
	double  total;

	start = clock();
	for (int i = 0; i < 1024; i++)
	{
		char *test = plib_testing_string_generator1(set, i);
		bump_free((void **)&test);
	}
	end = clock();
	total = ((double) end - start) / CLOCKS_PER_SEC;
	printf("pool alloc random string = %f\n", total);

	start = clock();
	for (int i = 0; i < 1024; i++)
	{
		char *test = plib_testing_string_generator(set, i);
		// printf("[%s]\n",test);
		plib_memory_dealloc(test);
	}
	end = clock();
	total = ((double) end - start) / CLOCKS_PER_SEC;
	printf("calloc random string = %f\n", total);
}
