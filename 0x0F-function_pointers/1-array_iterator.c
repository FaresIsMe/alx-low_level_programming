#include "function_pointers.h"
/**
 * array_iterator - wrappeer function
 * @array: the name to ba passed
 * @size: the size of the array
 * @action: the function that name ti be passed to
 * Return: Nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (size == 0 || action == NULL || array == NULL)
	return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
