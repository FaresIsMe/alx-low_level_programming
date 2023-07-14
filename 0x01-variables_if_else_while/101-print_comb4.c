#include <stdio.h>
/**
 *main-Entyy
 *Decription: idk
 *Return: Always 0
*/
int main(void)
{
	int i;
	int k;
	int c;

	for (i = '0'; i <= '9'; i++)
	{
		for (k = i + 1; k <= '9'; k++)
		{
			for (c = k + 1; c <= '9'; c++)
			{
				putchar(i);
				putchar(k);
				putchar(c);
				if (i != '7' || k != '8' || c != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
