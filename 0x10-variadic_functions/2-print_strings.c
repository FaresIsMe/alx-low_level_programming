#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @n: the argiuments count
 * @separator: ","
 * Return: nothings
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(arg, char*);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator != NULL && i < (n - 1))
		printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
