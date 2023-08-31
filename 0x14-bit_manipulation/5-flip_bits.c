#include "main.h"
/**
 * flip_bits - it sees the diffrenece between bits
 * @n: the binary string
 * @m: ...
 *
 * Return: the num in int
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit_count = 0;
	unsigned int xor;

	xor = n ^ m;
	while (xor > 0)
	{
		if (xor & 1)
		bit_count++;
		xor = xor >> 1;
	}
	return (bit_count);
}
