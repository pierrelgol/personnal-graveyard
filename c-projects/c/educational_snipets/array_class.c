#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

/*
The C language uses arrays of a declared size (including variable length arrays,
i.e. VLA) and dynamically allocated memory blocks. While they are mostly the
same, it is important that the sizeof operator, which returns a number of
bytes, behaves quite differently for arrays and for memory pointers. The problem
is that arrays are passed to functions (procedures) via pointers. Even if we
define a global variable as an array, after using it as a function argument the
appropriate parameter will "forget" what size the array is.
Therefore, an object-oriented technique is used in the solution below. (This
is possible even with standard C, i.e. C without ++.) Block of memory in which
is stored the array is wrapped in structure and thus the size of the array
can be easily stored. It is very convenient. Having defined such "classes" as
StringArray, their use is easy and hassle-free. Nevertheless, the C language
is not designed for OOP, and therefore C ++ is simply better for these kinds
of applications.
*/

struct StringArray
{
    size_t sizeOfArray;
    size_t numberOfElements;
    char** elements;
};
typedef struct StringArray* StringArray;

StringArray StringArray_new(size_t size)
{
    StringArray this = calloc(1, sizeof(struct StringArray));
    if (this)
    {
        this->elements = calloc(size, sizeof(int));
        if (this->elements)
            this->sizeOfArray = size;
        else
        {
            free(this);
            this = NULL;
        }
    }
    return this;
}

void StringArray_delete(StringArray* ptr_to_this)
{
    assert(ptr_to_this != NULL);
    StringArray this = (*ptr_to_this);
    if (this)
    {
        for (size_t i = 0; i < this->sizeOfArray; i++)
            free(this->elements[i]);
        free(this->elements);
        free(this);
        this = NULL;
    }
}

void StringArray_add(StringArray this, ...)
{
    char* s;
    va_list args;
    va_start(args, this);
    while (this->numberOfElements < this->sizeOfArray && (s = va_arg(args, char*)))
        this->elements[this->numberOfElements++] = strdup(s);
    va_end(args);
}


int main(int argc, char* argv[])
{
    StringArray a = StringArray_new(10);
    StringArray_add(a, "apple", "orange", NULL);

    printf(
        "There are %zu elements in an array with a capacity of %zu elements:\n\n",
        a->numberOfElements, a->sizeOfArray);

    for (size_t i = 0; i < a->numberOfElements; i++)
        printf("    the element %zu is the string \"%s\"\n", i, a->elements[i]);

    StringArray_delete(&a);

    return EXIT_SUCCESS;
}
