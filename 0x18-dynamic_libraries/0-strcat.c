#include "main.h"
#include <string.h>
/**
 *_strcat - concatenates two strings
 *@dest:idk
 *@src: idk
 *Return: nothing
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	int L;
	int L2;

	L = strlen(dest);
	L2 = L + strlen(src);
	for (i = L, j = 0; i < L2; i++, j++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
