#include <stdio.h>

/**
 * main - prints the alphabet
 *
 * return: Always success
 */

int main(void)
{
	char ch_lower = 'a';
	char ch_upper = 'A';

	while(ch_lower <= 'z' && ch_upper <= 'Z')
	{
		putchar(ch_lower);
		putchar(ch_upper);
	}
	putchar('\n');

	return (0);
}
