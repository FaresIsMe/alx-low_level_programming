#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * array_range - it's like malloc
 * @min: the size of the dynamic array
 * @max: idk
 * Return: a pointer address
*/

int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}
