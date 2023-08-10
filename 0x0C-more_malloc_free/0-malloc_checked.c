#include <stdlib.h>
#include <limits.h>
#include "main.h"
/**
 * malloc_checked - it's like malloc
 * @b: the size of the dynamic array
 * Return: a pointer address
*/
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	exit(98);

	return (ptr);
}
