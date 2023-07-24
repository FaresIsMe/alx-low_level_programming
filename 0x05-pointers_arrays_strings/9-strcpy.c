#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *_strcpy - it copies strings
 *@dest: the copy
 *@src: the original string
 *Return: string copied
*/
char *_strcpy(char *dest, char *src)
{
		int i;
		int L;

		L = strlen(src);
		for (i = 0; i <= L ; i++)
		{
			dest[i] = src[i];
		}
			return (src);
}
