#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index,
 * @n: pointer to unsigned long int,
 * @index: Index position of bit to set to 0,
 * Return: 1 on Success, -1 on failure.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1UL << index);

	return (1);
}
