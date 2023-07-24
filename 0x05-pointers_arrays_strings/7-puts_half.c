#include "main.h"
#include <string.h>

/**
 *puts_half - some pointer
 *@str: some pointer
 * Return: the length of the string s
*/
void puts_half(char *str)
{
		int i;
		int f;
		int L;

		L = strlen(str);
		if (L % 2 == 0)
			f = L / 2;
		else
			f = (L + 1) / 2;
		for (i = f; i < L; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
}
