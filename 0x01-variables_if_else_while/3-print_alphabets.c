#include <stdio.h>

/**
 * main - prints the alphabet
 *
 * return: Always 0 success
 */

int main(void)
{
	char ch_lower = 'a';
	char ch_upper = 'A';

	while (ch_lower <= 'z' && ch_upper <= 'Z')
	{
		putchar(ch_lower);
		putchar(ch_upper);
		ch_lower++;
		ch_upper++;
	}
	putchar('\n');

	return (0);
}
