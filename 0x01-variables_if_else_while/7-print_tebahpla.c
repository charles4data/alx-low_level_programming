#include <stdio.h>

/**
 * main - main function starts here
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch26;

	for (ch26 = 'z'; ch26 >= 'a'; ch26--)
	{
		putchar(ch26);
	}
	putchar('\n');
	return (0);
}
