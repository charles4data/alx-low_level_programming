#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints struct dog
 * @d: parameter,
 * Return: void.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (*d).name);
		printf("Age: %.1f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);
	}
}
