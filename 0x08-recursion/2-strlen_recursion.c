#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - it prints a string
 * @s: the string
 * Description: it calls it self untill it's finished
 * Return: idk
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
