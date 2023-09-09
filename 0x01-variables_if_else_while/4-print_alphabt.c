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
		if (letter =='q' || letter == 'e')
			continue;
		else
		{
			putchar(letter);
		}
		letter++;
	}

	putchar('\n');
	return (0);
}
