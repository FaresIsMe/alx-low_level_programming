#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array in the heap
 * @size: the size of the array
 * @c: the character to initialize the array with
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	return (NULL);

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	ptr[i] = c;

	return (ptr);
}
