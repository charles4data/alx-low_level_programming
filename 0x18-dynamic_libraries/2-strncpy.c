#include "main.h"

/**
 *  * _strncpy - copies a string
 *   * @dest: where to paste
 *    * @src: what to copy
 *     * @n: max length to copy and paste
 *      * Return: dest.
 *       */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
