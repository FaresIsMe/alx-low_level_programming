#include "main.h"
#include <string.h>
/**
 * _pow_recursion - It uses recursion to get the power
 * @x: The number
 * @y: The power
 * Description: It calls it self untill it's finished
 * Return: Itself IDK
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
	return (1);
	else if (y < 0)
	return (-1);
	else
	return (x * _pow_recursion(x, y - 1));
}
