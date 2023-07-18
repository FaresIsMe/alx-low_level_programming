#include "main.h"
/**
 *print - yes
 *description: from a to z
 *Return : 0
*/

void print_alphabet(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; ++c)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
