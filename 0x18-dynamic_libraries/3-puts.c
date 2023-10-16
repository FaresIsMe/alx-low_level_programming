#include "main.h"
#include <string.h>

/**
 *_puts - some pointer
 *@str: some pointer
 * Return: the length of the string s
*/
void _puts(char *str)
{
	for (; *str != '\0'; str++)
		_putchar(*str);
	_putchar('\n');
}
