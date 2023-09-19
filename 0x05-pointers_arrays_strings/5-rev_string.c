#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - function reverses a string
 * @s: string to be reversed
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int len = strlen(s);

	char *start = s;
	char *end = s + len - 1;
	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}
