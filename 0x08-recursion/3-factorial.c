#include "main.h"
#include <string.h>
/**
 * factorial - it uses recursion to get thhe factorial
 * @n: The number
 * Description: it calls it self untill it's finished
 * Return:itself IDK
*/
int factorial(int n)
{
	if (n == 1 || n == 0)
	return (1);
	else if (n < 0)
	return (-1);
	else
	return (n * factorial(n - 1));
}
