#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints all
 * @format: the argiuments count
 * Return: nothings
*/
void print_all(const char * const format, ...)
{
	va_list arg;
	int i = 0;
	char *str;

	va_start(arg, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
			printf("%c", va_arg(arg, int));
			break;
			case 'i':
			printf("%d", va_arg(arg, int));
			break;
			case 'f':
			printf("%f", va_arg(arg, double));
			break;
			case 's':
			str = va_arg(arg, char*);
			if (str == NULL)
			{
				printf("(nil)");
			}
			printf("%s", str);
			break;
			default:
			i++;
			continue;
		}
		if (format[i + 1])
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(arg);
}
