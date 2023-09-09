#include <stdio.h>

/**
 * main - prints the alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;

		if (letter == 'q' || letter == 'e')
			continue;
	}

	putchar('\n');
	return (0);
}
