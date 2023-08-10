#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * string_nconcat - it's like malloc
 * @n: the size of the dynamic array
 * @s1: idk
 * @s2: idk
 * Return: a pointer address
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int L;
	int i;
	unsigned int j;

	L = strlen(s1);
	ptr = malloc(sizeof(char) * (L + n));

	if (ptr == NULL)
	return (NULL);

	for (i = 0; i < L; i++)
	ptr[i] = s1[i];

	if (ptr == NULL)
	return (NULL);

	for (i = L, j = 0; j < n; i++, j++)
	ptr[i] = s2[j];
	ptr[i] = '\0';

	return (ptr);
}
