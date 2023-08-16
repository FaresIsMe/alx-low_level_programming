#include "function_pointers.h"
/**
 * print_name - wrappeer function
 * @name: the name to ba passed
 * @f:the function that name ti be passed to
 * Return: Nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return:
	f(name);
}
