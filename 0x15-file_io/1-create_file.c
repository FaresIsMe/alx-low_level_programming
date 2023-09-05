#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_file - creats a file
 * @filename: the name of the file
 * @text_content: what's to be written in the file
 * Return: (-1) on faliure, (1) on success
*/
int create_file(const char *filename, char *text_content)
{
	FILE *fp;

	if (filename == NULL)
	return (-1);

	fp = fopen(filename, "rw");
	if (fp == NULL)
	return (-1);
	else
	{
		if (fputs(text_content, fp) == EOF || ferror(fp))
		{
			fclose(fp);
			return (-1);
		}
		fclose(fp);
		return (1);
	}
}
