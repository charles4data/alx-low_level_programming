#include <stdio.h>

/**
 * main - prints the alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
        char alfa = 'a';

        while (alfa <= 'z')
        {
                if (alfa != 'q' && alfa != 'e')
                        putchar(alfa);
                else
                        continue;
                alfa++;
        }
        putchar('\n');
        return (0);
}
