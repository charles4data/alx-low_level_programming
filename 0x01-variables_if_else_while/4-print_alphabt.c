#include <stdio.h>

/**
 * main - main function starts here
 *
 * Return: Always0 0 (Success)
 */

int main(void)
{
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		if (chr != 'q' && chr != 'e')
		{
			putchar(chr);
		}
		else
		{
			continue;
		}
	}
	putchar('\n');
	return (0);
}
