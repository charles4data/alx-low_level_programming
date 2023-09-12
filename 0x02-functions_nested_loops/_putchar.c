#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int print_alphabet(void)
{
	char lw;

	for (lw = 'a'; lw <= 'z'; lw++)
	{
		putchar(lw);
	}
	putchar('\n');
	return (0);
}
