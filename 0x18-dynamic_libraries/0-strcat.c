#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates a string,
 * @dest: destination string
 * @src: source string
 * Return: Always dest.
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
