#include "main.h"
#include <stdio.h>

/**
 * swap_int - the function swap the value of integers
 * @*a: - First integer
 * @*b: - Second integer
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
