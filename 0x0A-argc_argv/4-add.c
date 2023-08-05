#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

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
	int j;
	int L;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if ((*argv[i] >= 48 && *argv[i] <= 57) || *argv[i] == '-')
			{
				L = strlen(argv[i]);
				for (j = 0; j < L; j++)
				{
					if (argv[i][j] >= 48 && argv[i][j] <= 57)
					{
						continue;
					}
					else
					{
						printf("Error\n");
						return (1);
					}
				}
				sum = sum + atoi(argv[i]);
			}
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
