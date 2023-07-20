#include "main.h"

/**
 *print_line - makes a line with length n
 *@n: the length
 *Return: nothing
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
