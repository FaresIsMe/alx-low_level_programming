#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - creates an array in the heap
 * @str: the character to initialize the array with
 * Return: a pointer to the array, or NULL if it fails
 */
char *_strdup(char *str)
{
	char *ptr;
	int i;
	int L = 0;

	if (str == NULL)
	return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	L++;

	if (L == 1)
	return (NULL);

	ptr = malloc(sizeof(char) * (L + 1));

	if (ptr == NULL)
	return (NULL);

	for (i = 0; i <= L; i++)
	ptr[i] = str[i];

	return (ptr);
}
