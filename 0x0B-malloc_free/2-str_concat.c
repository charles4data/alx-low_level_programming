#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatenates two strings,
 * @s1: dstination string,
 * @s2: source string,
 * Return: Pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	char *s1s2;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	s1s2 = (char *)malloc(strlen(s1) + strlen(s2) + 1);

	if (s1s2 != NULL)
	{
		strcpy(s1s2, s1);

		strcat(s1s2, s2);
	}
	return (s1s2);
}
