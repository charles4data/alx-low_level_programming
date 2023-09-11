#include <stdio.h>

/**
 * main - main function starts here
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch10;
	char af6;

	for (ch10 = '0'; ch10 <= '9'; ch10++)
	{
		putchar(ch10);
	}

	for (af6 = 'a'; af6 <= 'f'; af6++)
	{
		putchar(af6);
	}

	putchar('\n');
	return (0);
}
