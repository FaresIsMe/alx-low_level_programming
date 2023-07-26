#include "main.h"
#include <string.h>
/**
 * leet - capitalizes all words of a string
 * @s: the string to capitalize
 *
 * Return: a pointer to the modified string
 */
char *leet(char *s)
{
	int i;
	int L;

	L = strlen(s);
	for (i = 0; i < L; i++)
	{
		if (s[i] == 'a' || s[i] == 'A')
		{
			s[i] = '4';
		}
		else if (s[i] == 'e' || s[i] == 'E')
		{
			s[i] = '3';
		}
		else if (s[i] == 'o' || s[i] == 'O')
		{
			s[i] = '0';
		}
		else if (s[i] == 't' || s[i] == 'T')
		{
			s[i] = '7';
		}
		else if (s[i] == 'l' || s[i] == 'L')
		{
			s[i] = '1';
		}
	}
	return (s);
}
