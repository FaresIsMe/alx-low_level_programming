#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "main.h"
/**
 * binary_to_uint - converts binary to int
 * @b: the binary string
 *
 * Return: the num in int
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;
	int len;
	int bit;

	if (b == NULL)
	return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		return (0);
	}

	len = strlen(b);

	for (i = 0; b[i] != '\0'; i++)
	{
		bit = b[i] - '0';
		num = (num * 2) + bit;
		len--;
	}
	return (num);
}
