#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: parameter to check
 * @c: character to check
 * Return: s or NULL.
 */


char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
