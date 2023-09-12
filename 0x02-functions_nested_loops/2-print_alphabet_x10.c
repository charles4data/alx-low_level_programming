#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int tms;

	for (tms = 1; tms <= 10; tms++)
	{
		char alfa;

		for (alfa = 'a'; alfa <= 'z'; alfa++)
		{
			putchar(alfa);
		}
	}
	putchar('\n');
}
