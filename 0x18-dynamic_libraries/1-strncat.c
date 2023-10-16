#include "main.h"
#include <string.h>
/**
 *_strncat - concatenates two strings
 *@dest:idk
 *@src: idk
 *@n: number of bytes
 *Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
		int i;
		int j;
		int L;
		int L2;
		int L3;

		L = strlen(dest);
		L2 = L + n;
		L3 = strlen(src);
		for (i = L, j = 0; i < L2 && j < L3; i++, j++)
		{
			dest[i] = src[j];
		}
		return (dest);
}
