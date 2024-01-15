#include "main.h"

/**
 *  * _memset - fills memory with a constant byte
 *   * @n: parameter
 *    * @s: parameter
 *     * @b: parameter
 *      * Return: Always s
 *       */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
	{
		*p++ = b;
	}
	return (s);
}
