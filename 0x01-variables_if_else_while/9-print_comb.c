#include <stdio.h>
/**
 *main-Entyy
 *Decription: idk
 *Return: Always 0
*/
int main(void)
{
	int i = '0';

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i <= '8')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
