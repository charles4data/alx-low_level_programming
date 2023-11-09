#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * op_add - returns the sum of a and b,
 * @a: parameter a,
 * @b: parameter b,
 * Return: sum.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns difference btn a and b,
 * @a: first value,
 * @b: second value,
 * Return: difference.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a: first value,
 * @b: second value,
 * Return: product of the two values.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of division,
 * @a: value 1,
 * @b: value 2,
 * Return: division of a and b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns the remainder of division,
 * @a: value 1,
 * @b: value 2,
 * Return: Remainder of division of a and b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}


