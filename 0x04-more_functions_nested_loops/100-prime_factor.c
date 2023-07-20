#include <stdio.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number.
 * @n: The number to find the largest prime factor of.
 * Return: The largest prime factor of the number.
*/
long int largest_prime_factor(long int n)
{
long int i, largest_factor;

largest_factor = -1;
while (n % 2 == 0)
{
largest_factor = 2;
n /= 2;
}
for (i = 3; i * i <= n; i += 2)
{
while (n % i == 0)
{
largest_factor = i;
n /= i;
}
}
if (n > 2)
largest_factor = n;
return (largest_factor);
}
/**
 *main - entry
 *description:nothing
 *Return: 0
 */
int main(void)
{
long int number = 612852475143;
long int largest_factor;

largest_factor = largest_prime_factor(number);
printf("%ld\n", largest_factor);
return (0);
}
