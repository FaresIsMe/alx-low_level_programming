#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _calloc - it's like malloc
 * @nmemb: the size of the dynamic array
 * @size: idk
 * Return: a pointer address
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	return (NULL);

	for (i = 0; i < nmemb; i++)
	ptr[i] = '\0';

	return (ptr);
}
