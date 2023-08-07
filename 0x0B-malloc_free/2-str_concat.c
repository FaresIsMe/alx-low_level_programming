#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - creates an array in the heap
 * @s1: IDK
 * @s2: idk
 * Return: a pointer to the array, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i;
	int L = 0;
	int L2 = 0;
	int j;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	L++;

	for (i = 0; s2[i] != '\0'; i++)
	L2++;

	if (L == 1 && L2 == 1)
	return (NULL);

	ptr = malloc(sizeof(char) * (L2 + L + 1));

	if (ptr == NULL)
	return (NULL);

	for (i = 0; i <= L; i++)
	ptr[i] = s1[i];

	for (i = L, j = 0; j <= L2; i++, j++)
	ptr[i] = s2[j];

	return (ptr);
}
