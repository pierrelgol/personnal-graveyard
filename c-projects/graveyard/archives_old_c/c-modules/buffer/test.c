#include <stdio.h>
#include "buffer.h"
#include "log.h"

#define TEST_ZERO 0
#define TEST_TEN 10

void	test_size_zero(void)
{
	t_buffer *buffer = NULL;

	buffer = buffer_constructor(TEST_ZERO);
	debug_assert(buffer == NULL, "test1 : Failed");
}

void	test_size_ten(void)
{
	t_buffer *buffer = NULL;

	buffer = buffer_constructor(TEST_TEN);

	debug_assert((buffer->capacity != TEST_TEN), "test2 : Failed");
	debug_assert(buffer->elements != NULL, "test2 : Failed");

	
}

void	test_read_10(void)
{
	t_buffer *buffer = NULL;

	buffer = buffer_constructor(TEST_TEN);
	debug_assert(buffer->capacity = TEST_TEN, "test3 : Failed");
	debug_assert(buffer->elements != NULL, "test3 : Failed");
	for(int i = 0; i < buffer->capacity; i++)
		printf("%d, ",i);
	printf("\n");
	
}

int main(void)
{
	
	test_size_zero();
	printf("test1 : Passed\n");
	test_size_ten();
	printf("test2 : Passed\n");
	test_read_10();
	printf("test3 : Passed\n");
	
	return (0);
}
