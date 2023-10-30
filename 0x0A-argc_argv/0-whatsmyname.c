#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints the programme name
 * @argc: argument count,
 * @argv: arguments array,
 * Return: Always 0 if success.
 */

int print_name(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
