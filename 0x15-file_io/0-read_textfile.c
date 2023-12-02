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
	ssize_t b_read;
	ssize_t b_written;


	if (filename == NULL)
	{
		return (0);
	}
	else
	{
		file_desc = open(filename, 0_RDONLY);
		
		if (file_desc == -1)
		{
			perror("Error opening file");
			return (0);
		}

		else
		{
			buffer = malloc(letters);
			if (buffer == NULL)
			{
				perror("Could not allocate memory");
				close(file_desc);
				return (0);
			}
			else
			{
				b_read = read(file_desc, buffer, letters);
				if (b_read == -1)
				{
					perror("Could not read the file");
					close(file_desc);
					free(buffer);
					return (0);
				}
				else
				{
					b_written = write(STDOUT_FILENO, buffer, b_read);
					if (b_written == -1 || b_written != b_read)
					{
						perror("Could not write to stdout\n");
						close(file_desc);
						free(buffer);
						return (0);
					}
				}
			}

		}
	}
	close(file_desc);
	free(buffer);
	return (b_written);
}
