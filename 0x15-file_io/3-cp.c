#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#define BUFFER_SIZE 1024
/**
 * print_error_and_exit - prints the error and exit
 * @err_num: the error code
 * @err_msg: the messege with the error
 * Return: nothing
*/
void print_error_and_exit(int err_num, char *err_msg, const char *str)
{
	dprintf(STDERR_FILENO, err_msg, str);
	exit(err_num);
}
/**
 *  copy_file - it works as cp
 * @file_from: The file to be copied
 * @file_to: the copy
 * Return: nothing
*/
void copy_file(const char *file_from, const char *file_to)
{
	char buffer[BUFFER_SIZE + 1];
	int fd_from, fd_to, bytes_read, bytes_written;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	print_error_and_exit(98, "Error: Can't read from file %s", file_from);

	fd_to = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, 0644);
	if (fd_to == -1)
	{
		close(fd_from);
		print_error_and_exit(99, "Error: Can't write to %s", file_to);
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			close(fd_from);
			close(fd_to);
			print_error_and_exit(99, "Error: Can't write to %s", file_to);
		}
	}
	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		print_error_and_exit(98, "Error: Can't read from %s", file_from);
	}

	if (close(fd_from) == -1)
		print_error_and_exit(100, "Error: Can't close file descriptors for %s", file_from);
	if (close(fd_to) == -1)
		print_error_and_exit(100, "Error: Can't close file descriptor for %s", file_to);
}
/**
 * main - entry
 * @ac: the count
 * @av: the string
 * Return: 0 on success
 *
*/
int main(int ac, char *av[])
{
	const char *file_from;
	const char *file_to;

	if (ac != 3)
	print_error_and_exit(97, "Usage: cp file_from file_to", '\0');

	file_from = av[1];
	file_to = av[2];

	copy_file(file_from, file_to);

	return (0);
}

