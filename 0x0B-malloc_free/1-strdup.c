#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space,
 * @str: str to copy
 * Return: pointer to string.
 */

char *_strdup(char *str)
{
	char *nstr;

	if (str == NULL)
	{
		return (NULL);
	}

	nstr = (char *)malloc(strlen(str) + 1);

	if (nstr == NULL)
	{
		return (NULL);
	}
	else
	{
		strcpy(nstr, str);
	}

	return (nstr);
}
