#include "main.h"

/**
 *print_diagonal - makes a line with length n
 *@n: the length
 *Return: nothing
*/
void print_diagonal(int n)
{
	int k;
	int i;
if (n > 0)
{
	for (k = 0; k < n; k++)
	{
		_putchar('\\');
		_putchar('\n');
		for (i = 0; i <= k; i++)
		{
			_putchar(' ');
		}
	}
}
else
{
	_putchar('\n');
}
}
