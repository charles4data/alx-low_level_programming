#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - concatanates two strings
 * @dest: string to append to
 * @src: String to be appended
 * Return: Pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
