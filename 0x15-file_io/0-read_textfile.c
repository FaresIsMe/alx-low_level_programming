#include "main.h"
/**
 * read_textfile - reads a file only
 * @filename: the file name
 * @letters: idk
 * Return: 0 on faliure bytes on success
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_place;
	ssize_t bytes;
	char buffer[1024 * 8];

	if (!filename || !letters)
	return (0);

	file_place = open(filename, O_RDONLY);
	if (file_place == -1)
	return (0);
	bytes = read(file_place, &buffer[0], letters);
	bytes = write(STDOUT_FILENO, &buffer[0], bytes);
	close(file_place);

	return (bytes);
}
