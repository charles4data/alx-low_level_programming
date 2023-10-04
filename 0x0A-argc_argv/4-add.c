#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers,
 * @argc: number of arguments,
 * @argv: list of positive numbers,
 * Return: Return 0 0r 1.
 */

int main(int argc, char *argv[])
{
	int i, j;
	long int total_sum = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		long int num;

		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			num = strtol(argv[i], NULL, 10);

			total_sum += num;
		}
		printf("%ld\n", total_sum);
	}

	return (0);
}
