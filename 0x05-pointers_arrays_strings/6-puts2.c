#include "main.h"
#include <string.h>

/**
 *puts2 - some pointer
 *@str: some pointer
 * Return: the length of the string s
*/
void puts2(char *str)
{
	int i;

	for(i = 0; *str != '\0'; str++, i++)
	{
		if ( i % 2 == 0)
			_putchar(*str);
	}
	_putchar('\n');
}
