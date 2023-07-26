#include "main.h"
#include <string.h>
/**
 *_strncpy - concatenates two strings
 *@dest:idk
 *@src: idk
 *@n: number of bytes
 *Return: idk
*/
char *_strncpy(char *dest, char *src, int n)
{
		int i;

		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
		return (dest);
}
