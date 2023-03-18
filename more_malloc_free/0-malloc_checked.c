#include "main.h"

/**
 * malloc_checked - Entry Point
 * @b: int
 * Return: pointer
 *
 */
void *malloc_checked(unsigned int b)
{
	int *point;

	point = malloc(b);

	if (point == NULL)
		exit(98);

	return (point);
}
