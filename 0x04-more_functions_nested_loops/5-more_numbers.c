#include "main.h"

/**
 *more_numbers - from 0 to 14 ten times!!
 *Return: nothing
*/

void more_numbers(void)
{
	int i;
	int k;

	for (k = 0; k < 10; k++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i < 10)
			{
				_putchar(i + '0');
			}
			else
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
