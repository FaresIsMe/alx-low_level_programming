#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *print_array - some pointer
 *@a: some pointer
 *@n: idk
 * Return: the length of the string s
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
