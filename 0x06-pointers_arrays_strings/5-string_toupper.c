#include "main.h"
#include <string.h>
/**
 *string_toupper - concatenates two strings
 *@s:idk
 *Return: nothing
*/
char *string_toupper(char *s)
{
	int i;
	int L;

	L = strlen(s);
	for (i = 0; i < L; i++)
	{
		if (s[i] > 90)
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
