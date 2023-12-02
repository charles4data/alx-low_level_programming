#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints to POSIX,
 * @filename: pointer to name of file,
 * @letters: number of letters to print and write,
 * Return: Number of letters read and written.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc;
	char *buffer;
	ssize_t b_read, b_written;


	if (filename == NULL)
	{
		return (0);
	}
	file_desc = open(filename, O_RDONLY);
		
	if (file_desc == -1)
	{
		return (0);
	}
	buffer = malloc(letters);
	
	if (buffer == NULL)
	{
		close(file_desc);
		free(buffer);
		return (0);
	}
	b_read = read(file_desc, buffer, letters);
	
	if (b_read == -1)
	{
		close(file_desc);
		free(buffer);
		return (0);
	}
	b_written = write(STDOUT_FILENO, buffer, b_read);
	
	if (b_written == -1 || b_written != b_read)
	{
		close(file_desc);
		free(buffer);
		return (0);
	}
	close (file_desc);
	free(buffer);
	return (b_written);
}
