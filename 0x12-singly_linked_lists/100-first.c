#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * print_first - prints before main
 * Return: Nothing.
 */

void __attribute__ ((constructor)) print_first()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
