#include "main.h"
#include <stdio.h>

/**
 * _atoi - checks
 *
 * Return: Something
 */

int _atoi(char *s)
{
    int result = 0;
    int sign = 1;
    int i = 0;

    /* Handle leading whitespace */
    while (s[i] == ' ') {
        i++;
    }

    /* Handle sign */
    if (s[i] == '-' || s[i] == '+') {
        sign = (s[i] == '-') ? -1 : 1;
        i++;
    }

    /* Convert digits to integer */
    while (s[i] >= '0' && s[i] <= '9') {
        result = result * 10 + (s[i] - '0');
        i++;
    }

    return (sign * result);
}
