#include "main.h"
#include <string.h>
/**
 *reverse_array - concatenates two strings
 *@a:idk
 *@n: idk
 *Return: nothing
*/
void reverse_array(int *a, int n)
{
	int i;
	int j = n - 1;
	int temp;

	for (i = 0, j = n - 1; i < (n / 2); i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
