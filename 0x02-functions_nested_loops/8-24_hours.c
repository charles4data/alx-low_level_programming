#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints every minute from 00:00 to 23:59
 *
 * Retun: Always 0.
 */

void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; hours <= 23; hours++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			printf("%2d:%2d\n", hours, minutes);
		}
	}
}
