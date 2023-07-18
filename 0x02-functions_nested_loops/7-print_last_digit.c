#include "main.h"
/**
 *print_last_digit -checks
 *@n: the c
 *Description: nothing
 *Return: 1 if c lower, 0 if not
*/
int print_last_digit(int n)
{
	int k = n % 10;

	_putchar(k);
	return (n % 10);
}
