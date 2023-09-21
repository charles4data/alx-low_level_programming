#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - concaenates two strings
 * @dest: destination string
 * @src: source string
 * @n: maximum length to concatenate
 * Return: Always dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
