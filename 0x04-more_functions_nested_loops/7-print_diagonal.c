#include "main.h"

/**
 *print_diagonal - makes a line with length n
 *@n: the length
 *Return: nothing
*/
void print_diagonal(int n)
{
	int k = 0;
	int i = 0;

if (n > 0)
{
	for (k = 0; k < n; k++)
	{
		for (i = 0; i < k; i++)
		{
			_putchar('_');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
else
{
	_putchar('\n');
}
}
