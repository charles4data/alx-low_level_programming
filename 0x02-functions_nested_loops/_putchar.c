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

void print_alphabet_x10(void)
{
	int tms;
	for (tms = 1; tms <= 10; tms++)
	{
		char alfa;
		for (alfa = 'a'; alfa <= 'z'; alfa++)
		{
			putchar(alfa);
		}
	}
	putchar('\n');

}
