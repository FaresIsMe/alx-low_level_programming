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
	if (islower(c) == 2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
