#include "main.h"
/**
 * set_bit - converts binary to int
 * @n: the binary string
 * @index: ...
 *
 * Return: the num in int
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	return (-1);

	*n = *n | (1UL << index);
	return (1);
}
