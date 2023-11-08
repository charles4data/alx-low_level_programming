#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints struct dog,
 * @d: pointer to struct dog,
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name == NULL)
		{
			printf("(nil)");
		}
		printf("Name: %s\n", (*d).name);

		if ((*d).age == NULL)
		{
			printf("(nil)");
		}
		printf("Age: %f\n", (*d).age);

		if ((*d).owner == NULL)
		{
			printf("(nil)");
		}
		printf("Owner: %s\n", (*d).owner);
	}
}
