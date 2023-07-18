#include "main.h"
/**
 *print_alphabet_x10 - it does things
 *description: from a to z
 *Return : 0
*/

void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	for (i = 0; i < 10; i++)
	{
	for (c = 'a'; c <= 'z'; ++c)
	{
		_putchar(c);
	}
	_putchar('\n');
	}
}
