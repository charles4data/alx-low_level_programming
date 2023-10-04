#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: Numbers of arguments,
 * @argv: List of numbers,
 * Return: product of numbers.
 */

int main(int argc, char *argv[])
{
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);

		product = num1 * num2;

		printf("%d\n", product);
	}
	return (0);
}
