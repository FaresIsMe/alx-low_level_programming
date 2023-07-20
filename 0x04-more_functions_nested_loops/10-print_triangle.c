#include "main.h"

/**
 *print_triangle - makes a Ttiangle with base Size
 *@size: The base length
 *Return: nothing
*/
void print_triangle(int size)
{
if (size > 0)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		for (k = size - 1; k > i; k--)
		{
			_putchar(' ');
		}
		for (j = 0; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
else
{
_putchar('\n');
}
}
