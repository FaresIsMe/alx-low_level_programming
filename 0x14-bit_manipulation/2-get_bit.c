#include "main.h"
/**
 * get_bit - converts binary to int
 * @n: the binary string
 * @index: ...
 *
 * Return: the num in int
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > n * 4)
	return (-1);

	return ((n >> index) & 1);
}
