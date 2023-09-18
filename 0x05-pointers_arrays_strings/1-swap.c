#include "main.h"
#include <stdio.h>

/**
 * swap_int - the function swap the value of integers
 * @a: First parameter
 * @b: Second parameter
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
