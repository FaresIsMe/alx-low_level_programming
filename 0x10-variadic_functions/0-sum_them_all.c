#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums any number of arguments
 * @n: the argiuments count
 * Return: The sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	int sum = 0;

	va_start(arg, n);

	if (n == 0)
	return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);
	return (sum);
}
