#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
 * append_text_to_file - appends text to file
 * @filename: file where the text will be appended,
 * @text_content: text to append,
 * Return: 1 on success, -1 on fail.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc;
	ssize_t append;

	if (filename == NULL)
	{
		return (-1);
	}
	file_desc = open(filename, O_WRONLY | O_APPEND);

	if (text_content == NULL)
	{
		return (1);
	}
	append = write(file_desc, text_content, strlen(text_content));

	if (append == -1)
	{
		close(file_desc);
		return (-1);
	}
	close(file_desc);
	return (1);


}
