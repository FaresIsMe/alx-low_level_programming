#include "main.h"
#include <ctype.h>
/**
 *_islower -checks
 *@c: the c
 *Description: nothing
 *Return: 1 if c lower, 0 if not
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
