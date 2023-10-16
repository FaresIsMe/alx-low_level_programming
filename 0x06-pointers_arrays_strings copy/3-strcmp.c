#include "main.h"
#include <string.h>
/**
 *_strcmp - concatenates two strings
 *@s1:idk
 *@s2: idk
 *Return: idk
*/
int _strcmp(char *s1, char *s2)
{
		int sum = 0;
		int sum2 = 0;
		int i;
		int L;
		int L2;

		L = strlen(s1);
		L2 = strlen(s2);
		for (i = 0; i < L; i++)
		{
			sum = sum + s1[i];
		}
		for (i = 0; i < L2; i++)
		{
			sum2 = sum2 + s2[i];
		}
		if (sum == sum2)
		{
			return (0);
		}
		else if (sum > sum2)
		{
			return (1);
		}
		else
		{
			return (-1);
		}

		return (sum);
}
