#include "main.h"
#include <ctype.h>
/**
 *_isalpha -checks
 *@c: the c
 *Description: nothing
 *Return: 1 if c lower, 0 if not
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 60 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
