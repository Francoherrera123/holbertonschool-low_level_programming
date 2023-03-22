#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - create dog structure
 * @name: dog name
 * @age: dog age
 * @owner: owner
 *
 * Return: dog location
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int save_owner, save_name, i;

	dog_t *point;

	point = malloc(sizeof(dog_t));
		if (point == NULL)
			return (NULL);

	save_owner = strlen(owner);
	save_name = strlen(name);
	point->name = malloc(save_name + 1);
	{
		if (point->name == NULL)
		{
			free(point);
			return (NULL);
		}
	}
	point->owner = malloc(save_owner + 1);
	{
		if (point->owner == NULL)
		{
			free(point->name);
			free(point);
			return (NULL);
		}
	}
	for (i = 0; i < save_name; i++)
		point->name[i] = name[i];
	point->name[i] = '\0';

	for (i = 0; i < save_owner; i++)
		point->owner[i] = owner[i];
	point->owner[i] = '\0';

	point->age = age;
	return (point);
}
