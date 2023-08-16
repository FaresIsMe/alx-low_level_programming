#include "function_pointers.h"
/**
 * int_index - wrappeer function
 * @array: the name to ba passed
 * @size: the size of the array
 * @cmp: the function that name ti be passed to
 * Return: Nothing
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
	return (-1);

	for (i = 0; i <= size; i++)
	{
		if (i == size)
		return (-1);
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
