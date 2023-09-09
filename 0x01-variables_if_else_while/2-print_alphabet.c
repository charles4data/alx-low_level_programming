#include <stdio.h>

/**
 * Main: main function starts here
 *
 * Return: Always 0 (main function ends here)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
