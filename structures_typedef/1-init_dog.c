#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - params constructor
 * @d: pointer
 * @name: 1st element
 * @age: 2nd element
 * @owner: 3rd element
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		printf("Ok\n");
		exit(0);
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
