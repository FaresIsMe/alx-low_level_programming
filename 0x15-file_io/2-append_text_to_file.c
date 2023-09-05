#include "main.h"
#include <string.h>
/**
 * append_text_to_file - append
 * @filename: the name of the file
 * @text_content: what's to be written in the file
 * Return: (-1) on faliure, (1) on success
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t sz, len;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
		sz = write(filename, text_content, len);
		if (sz < 0)
		{
			close(fd);
			return (-1);
		}

	}
	close(fd);
	return (1);
}
