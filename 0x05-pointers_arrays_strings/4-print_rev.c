#include "main.h"
#include <string.h>

/**
 *print_rev - some pointer
 *@s: some pointer
 * Return: the length of the string s
*/
void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
