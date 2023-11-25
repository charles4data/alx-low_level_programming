#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * get_bit - returns the value of a bit at a given index,
 * @n: number,
 * @index: index of the binary,
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bitValue;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	n >>= index;

	bitValue = n & 1;

	return (bitValue);
}
