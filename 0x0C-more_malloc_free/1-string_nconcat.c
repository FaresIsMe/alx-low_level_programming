#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of characters from s2 to concatenate
 * Return: A pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	size_t len_s1, len_s2, concat_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	if (n >= len_s2)
		n = len_s2;

	concat_len = len_s1 + n;

	ptr = malloc((concat_len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	strcpy(ptr, s1);
	strncat(ptr, s2, n);

	return (ptr);
}
/**
