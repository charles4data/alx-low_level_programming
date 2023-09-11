#include <stdio.h>

/**
 * main - main function starts here
 *
 * Description: print all possible different combinations of two digits
 *
 * return: Always 0 (Success)
 */

int main(void)
{
	int num1, num2;

	for (num1 = '0'; num1 <= '9'; num1++)
	{
		for (num2 = num1 + '1'; num2 <= '9'; num2++)
		{
			putchar(num1);
			putchar(num1);
			
			if (num1 != '8' || num2 != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
