#include "main.h"
/**
 *print_last_digit -checks
 *@n: the c
 *Description: nothing
 *Return: 1 if c lower, 0 if not
*/
int print_last_digit(int n)
{
int k;
if (n < 0)
{
k = -1 * (n % 10);
}
else
{
k = n % 10;
}
_putchar(k + '0');
return (k);
}
