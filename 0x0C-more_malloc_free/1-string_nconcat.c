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
	char *ptr;
	unsigned int s1len = strlen(s1);
	unsigned int s2len = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	ptr = malloc(s1len + (n < s2len ? n : s2len) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	strcpy(ptr, s1);
	strncat(ptr, s2, n);
	return (ptr);
}
