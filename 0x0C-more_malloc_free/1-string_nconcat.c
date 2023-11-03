#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates a string,
 * @s1: first string,
 * @s2: second string,
 * @n: size of second string to add to first string,
 * Return: pointer to concatenated string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	void *ptr;
	unsigned int s1len = strlen(s1);
	unsigned int s2len = strlen(s2);

	ptr = (char *)malloc(s1len + (n < s2len ? n : s2len) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		if (n >= strlen(s2))
		{
			strcat(s1, s2);
			strcpy(ptr, s1);
		}
		else
		{
			strncat(s1, s2, n);
			strcpy(ptr, s1);
		}
	}
	return (ptr);
	
}
