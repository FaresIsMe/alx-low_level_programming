#include "main.h"
/**
 *print_sign -checks
 *@n: the c
 *Description: nothing
 *Return: 1 if c lower, 0 if not
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
