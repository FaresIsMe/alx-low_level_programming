#include <stdio.h>
/**
 *main-Entyy
 *Decription: idk
 *Return: Always 0
*/
int main(void)
{
	int i = 0;
	int v = 0xa;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (v = 'a'; v <= 'f'; ++v)
	{
		putchar(v);
	}
	printf("\n");
	return (0);
}
