#include "main.h"

/**
 * *array_range - Entry Point
 *
 * @min: int
 * @max: int
 *
 * Return: array of integer from min to max
 *
 */
int *array_range(int min, int max)
{
	int cont1 = 0, var = min;
	int *arry;

	if (min > max)
		return (NULL);

	arry = malloc(((max - min) + 1) * sizeof(int));

	if (arry == NULL)
		return (NULL);

	for (; var <= max; cont1++, var++)
		arry[cont1] = var;

	return (arry);
}
