#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * multiply - multiplies 2 numbers
 * @argc: argument count,
 * @argv: argument array,
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	if (argc >= 3)
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);

		int result = num1 * num2;

		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}

