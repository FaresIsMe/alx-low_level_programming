#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *main - entry
 *Description: IDK what it do more than this but cooool
 *@argv: idk
 *@argc: idk
 *Return: 0
*/
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if ((*argv[i] >= 48 && *argv[i] <= 57) || *argv[i] == '-')
				sum = sum + atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
	else
		printf("0\n");
	return (0);
}
