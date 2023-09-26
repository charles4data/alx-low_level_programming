#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: parameter 1
 * @needle: parameter 2
 * Return: pointer or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack)
	{
		h = haystack;
		n = needle;
		while (*h && *n && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}

