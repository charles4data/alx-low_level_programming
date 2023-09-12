#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - function prints the alphabet in lower case
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
