#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - copies a string 
 * @*dest: destination
 * @*src: Source.
 * Return: Pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	char *result = dest;

	while ((*dest++ == *src++))
	{
		strcpy(dest, src);
	}

	return (result);
}
