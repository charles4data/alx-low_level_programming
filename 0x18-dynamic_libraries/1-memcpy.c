#include "main.h"

/**
 *  * _memcpy - copies memory area
 *   * @dest: destination parametere
 *    * @src: source parameter
 *     * @n: number of bytes.
 *      * Return: Always dest.
 *       */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	const char *s = src;

	while (n-- > 0)
	{
		*d++ = *s++;
	}
	return (dest);
}

