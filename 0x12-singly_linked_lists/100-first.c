#include <stdio.h>
#include "lists.h"
#include <string.h>
/*
 * __attribute__ - prints before main
 * @constructor: not much,
 * Return: Nothing.
 */

void __attribute__ ((constructor)) print_before_main();

void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
