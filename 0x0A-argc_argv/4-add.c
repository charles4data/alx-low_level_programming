#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - adds and prints +ve numbers,
 * @argc: arguments count,
 * @argv: argument arrays,
 * Return: 0 0r 1.
 */

int main(int argc, char *argv[])
{
	int i, j, len, num;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		len = strlen(argv[i]);

		for (j = 0; j < len; j++)
		{
			if (j == 0 && (argv[i][j] == '_' || isdigit(argv[i][j])))
			{
				continue;
			}
			else if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[i]);

		if (num < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
