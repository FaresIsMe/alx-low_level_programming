#include "main.h"
#include <string.h>
/**
 *_strchr - int fills a memory block
 *@s: idk
 *@c: still dk
 *Return:dest
*/
char *_strchr(char *s, char c)
{
	int i;
	char *f = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
		f = &s[i];
		break;
		}
	}
	return (f);
}
