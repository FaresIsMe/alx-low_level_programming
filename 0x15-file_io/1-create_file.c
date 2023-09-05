#include "main.h"
#include <string.h>
/**
 * create_file - creats a file
 * @filename: the name of the file
 * @text_content: what's to be written in the file
 * Return: (-1) on faliure, (1) on success
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t sz, len;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
	return (-1);

	if (text_content)
	{
		len = strlen(text_content);
		sz = write(fd, text_content, len);

		if (sz != len)
		{
			close(fd);
			return (-1);
		}
	}
		close(fd);
		return (1);
}
