#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * string_toupper - changes lowercase letters to uppercase
 * @str: string to change
 * Return: transformed letters.
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		*ptr = toupper(*ptr);
		ptr++;
	}
	return (str);
}

