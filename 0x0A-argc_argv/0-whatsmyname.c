#include <stdio.h>

/**
 * main - prints the programme name
 * @argc: argument count
 * @argv: Arguments strings array
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc; i++)
	{
		if (i == 0)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
