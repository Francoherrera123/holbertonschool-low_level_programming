#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print params
 * @d: pointer
 * Return: pointer
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("Name: %p\n", d->name);

	if (d->age)
		printf("Age: %f\n", d->age);
	else
		printf("Age: 0.000000\n");

	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: %p\n", d->owner);

}
