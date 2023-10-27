#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 *  * _isdigit - checks for a digit
 *   * @c: parameter to check
 *    * Return: 1 or 0.
 *     */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
	return (0);
									}
}
