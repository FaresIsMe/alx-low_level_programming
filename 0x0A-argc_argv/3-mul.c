#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *main - entry
 *Description: IDK what it do more than this but cooool
 *@argv: idk
 *@argc: idk
 *Return: 0 if success, 1 if failed
*/
int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
