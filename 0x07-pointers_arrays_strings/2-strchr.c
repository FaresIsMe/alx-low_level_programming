#include "main.h"
#include <string.h>
/**
 *_strchr - it finds then prints the rest
 *@s: idk
 *@c: still dk
 *Return:dest
*/
char *_strchr(char *s, char c)
{
	int i;
	char *f;

	for (i = 0; s != NULL; i++)
	{
		if (s[i] == c)
		{
		f = &s[i];
		break;
		}
	}
	return (f);
}
