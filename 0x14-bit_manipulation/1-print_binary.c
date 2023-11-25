#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number,
 * @n: number to print,
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int power;

	if (n == 0)
	{
		printf("0");
		return;
	}

	power = 1;

	while (power <= n)
	{
		power = power << 1;
	}

	power = power >> 1;

	while (power > 0)
	{
		if (power >= 1)
		{
			printf("1");
			n = n - power;
		}
		else
		{
			printf("0");
		}
		power = power >> 1;
	}

}
