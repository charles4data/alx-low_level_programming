#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
 * create_file - creates a file,
 * @filename: name of file,
 * @text_content: content to write,
 * Return: 1 on Success, -1 on fail.
 */

int create_file(const char *filename, char *text_content)
{
	int file_desc;
	ssize_t write_result;

	if (filename == NULL)
	{
		return (-1);
	}

	file_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file_desc == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		write_result = write(file_desc, text_content, strlen(text_content));

		if (write_result == -1)
		{
			close(file_desc);
			return (-1);
		}
	}
	close (file_desc);
	return (1);
}
