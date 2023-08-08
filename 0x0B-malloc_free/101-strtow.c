#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - splits a string into words
 * @str: the string to split
 * Return: a pointer to an array of strings (words), or NULL if it fails
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, count;

	if (str == NULL || *str == '\0')
		return (NULL);


	len = strlen(str);
	count = 0;
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			count++;
	}

	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			// Allocate memory for the word
			words[k] = malloc(sizeof(char) * (len - i + 1));
			if (words[k] == NULL)
			{
				for (j = 0; j < k; j++)
					free(words[j]);
				free(words);
				return NULL;
			}


			for (j = 0; str[i + j] != ' ' && str[i + j] != '\0'; j++)
			{
				words[k][j] = str[i + j];
			}
			words[k][j] = '\0';
			k++;
		}
	}
	words[k] = NULL;

	return (words);
} 
