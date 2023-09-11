#include <stdio.h>

/**
 * main - main functions starts here
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int dgt10;

	for (dgt10 = 0; dgt10 <= 9; dgt10++)
	{
		putchar(dgt10 + '0');
	}
	putchar('\n');
	return (0);
}
