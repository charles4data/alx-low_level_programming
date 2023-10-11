#ifndef DOG_H
#define DOG_H

/**
 * struct dog - data on a dogs
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog owner
 */

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
