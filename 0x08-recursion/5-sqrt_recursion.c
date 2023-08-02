#include "main.h"
#include <string.h>

int _sqrt_helper(int n, int start);
/**
 * _sqrt_recursion - It uses recursion to get the power
 * @n: The number
 * Description: It calls it self untill it's finished
 * Return: Itself IDK
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	else if (n == 1 || n == 0)
	return (n);
	else
	return (_sqrt_helper(n, 1));
}
/**
 * _sqrt_helper - it helps me
 * @n:idk
 * @start:idk
 * Return: The square root
*/
int _sqrt_helper(int n, int start)
{
	if (n < start)
	{
		return (-1);
	}
	else if (start * start == n)
	{
		return (start);
	}
	else
	return (_sqrt_helper(n, start + 1));
}
