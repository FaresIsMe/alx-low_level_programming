#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - it prints a string
 * @s: the string
 * Description: it calls it self untill it's finished
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
