#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two pairs of two-digit
 * numbers separated by a comma and a space. The pairs are printed in
 * ascending order.
 *
 * Return: Always 0
 */


int main(void)
{
int i, j, k, l;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
for (k = i; k <= 9; k++)
{
if (k == i)
{
l = j + 1;
}
else
{
l = 0;
}
for (; l <= 9; l++)
{
putchar(i + '0');
putchar(j + '0');
putchar(' ');
putchar(l + '0');

if (!(i == 9 && j == 8 && k == 9 && l == 9))
{
putchar(',');
putchar(' ');
}
}
}
}
return (0);
}

