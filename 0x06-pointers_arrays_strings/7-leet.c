#include "main.h"
#include <string.h>
/**
 * leet - capitalizes all words of a string
 * @str: the string to capitalize
 *
 * Return: a pointer to the modified string
 */
char *leet(char *str)
{
		char *ptr = str;
		char *leetChars = "aAeEoOtTlL";
		char *leetNums = "4433007711";

		while (*ptr)
		{
			int i = 0;

			while (leetChars[i])
			{
				if (*ptr == leetChars[i])
					{
					*ptr = leetNums[i];
break;
					}
						i++;
				}
				ptr++;
		}
		return (str);
}
