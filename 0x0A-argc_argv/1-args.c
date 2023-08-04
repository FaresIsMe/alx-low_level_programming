#include <stdio.h>
#include "main.h"

/**
 *main - entry
 *Description: IDK what it do more than this but cooool
 *@argv: idk
 *@argc: idk
 *Return: 0
*/
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv[0] = argv[2 - 2];
	return (0);
}
