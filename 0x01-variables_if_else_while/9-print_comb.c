#include <stdio.h>

/**
 * main - main function starts here
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 <= 9; num1++)
	{
		putchar(num1 + '0');
		putchar(',');
		putchar(' ');

		for (num2 = 0; num2 <= 9; num2++)
		{
			putchar(num2 + '0');
		}
	}
	return (0);
}
