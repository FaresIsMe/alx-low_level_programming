#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - sums any number of arguments
 * @n: the argiuments count
 * @separator: ","
 * Return: The sum
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{

		printf("%d", va_arg(arg, int));
		if (separator != NULL && i < (n - 1))
		printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
