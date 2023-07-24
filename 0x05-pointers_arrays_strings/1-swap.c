#include "main.h"

/**
 *swap_int - some pointer
 *@a: some pointer
 *@b: some shit
 * Return: nothing of course
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
