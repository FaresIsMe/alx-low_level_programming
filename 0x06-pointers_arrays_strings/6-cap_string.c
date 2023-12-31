#include "main.h"
#include <stddef.h>

/**
 * cap_string - capitalizes all words of a string
 * @s: the string to capitalize
 *
 * Return: a pointer to the modified string
 */
char *cap_string(char *s)
{
	int i;

	/* Capitalize the first letter of the string */
	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - 'a' + 'A';
	}

	/* Capitalize the first letter of each word */
	for (i = 1; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z') &&
			(s[i - 1] == ' ' || s[i - 1] == '\t' ||
			 s[i - 1] == '\n' || s[i - 1] == ',' ||
			 s[i - 1] == ';' || s[i - 1] == '.' ||
			 s[i - 1] == '!' || s[i - 1] == '?' ||
			 s[i - 1] == '"' || s[i - 1] == '(' ||
			 s[i - 1] == ')' || s[i - 1] == '{' ||
			 s[i - 1] == '}'))
		{
			s[i] = s[i] - 'a' + 'A';
		}
	}

	return (s);
}
