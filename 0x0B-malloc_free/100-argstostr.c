#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the command line arguments into a single string
 * @ac: the number of command line arguments
 * @av: an array of strings containing the command line arguments
 * Return: a pointer to the concatenated string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, k;
	int len = 0;

	if (ac == 0 && av == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]);
	}

	ptr = malloc(sizeof(char) * (len + ac + 1));

	if (ptr == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[k++] = av[i][j];
		}
		ptr[k++] = '\n';
	}
	ptr[k] = '\0';
	return (ptr);
}
