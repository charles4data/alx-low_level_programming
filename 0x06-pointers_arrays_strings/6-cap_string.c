#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * cap_string - capitalizes the words of a string.
 * @s: The string to capitalize
 * Return: new s.
 */

char *cap_string(char *s)
{
	int i = 0;
	int flag = 1;

	while (s[i] != '\0')
	{
		if (flag == 1 && isalpha(s[i]))
		{
			s[i] = toupper(s[i]);
			flag = 0;
		}
		else if (strchr(" \t\n,;.!?\"(){}", s[i]))
		{
			flag = 1;
		}
		i++;
	}
	return (s);
}
