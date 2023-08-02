#include "main.h"
#include <string.h>

int prime_helper(int n, int start);

int prime_helper(int, int);
/**
 * is_prime_number - prime?
 * @n:idk
 * Return: your mom
*/
int is_prime_number(int  n)
{
	if (n == 2)
	return (1);
	else if (n == 1 || n < 0)
	return (0);
	return (prime_helper(n, 2));
}
/**
 * prime_helper - idfk
 * @n:ya
 * @start: yaya
 * Return: your prime 1 or 0
*/
int prime_helper(int n, int start)
{
	if (n % start == 0)
	return (0);
	else
	return (1);
	prime_helper(n, start + 1);
}
