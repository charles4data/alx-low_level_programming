#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * error_exit - provides an exit error
 * @code: code to exit with,
 * @format: error to provide
 */

#define BUFFER_SIZE 1024

void error_exit(int code, const char *format, ...)
{
	va_list args;
	va_start(args, format);
	dprintf(2, format, args);
	va_end(args);
	exit(code);
}

/**
 * main - copies the contents of one file to another,
 * @argc: Number of arguments,
 * argv: array of arguments,
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int fd_from;
	int fd_to;
	const char *file_from, *file_to;
	char buffer[BUFFER_SIZE];
	ssize_t read_size, write_size;

	file_from = argv[1];
	file_to = argv[2];

	if (argc != 3)
	{
		error_exit(97, "Usage: %s file_from file_to\n", argv[0]);
	}
	fd_from = open(file_from, O_RDONLY);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);

	if (fd_to == -1)
	{
		error_exit(99, "Error: Can't write to file %s\n", file_to);
	}

	while ((read_size = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_size = write(fd_to, buffer, read_size);

		if (write_size != read_size)
		{
			error_exit(99, "Error: Can't read from file %s\n", file_from);
		}
	}

	if (read_size == -1)
	{
		error_exit(98, "Error: Can't read from file %s\n", file_from);
	}

	if (close(fd_from) == -1)
	{
		error_exit(100, "Error: Can't close fd %d\n", fd_from);
	}

	if (close(fd_to) == -1)
	{
		error_exit(100, "Error: Can't close fd %d\n", fd_to);
	}

	return (0);
}
