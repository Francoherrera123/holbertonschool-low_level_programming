#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Entry point
 * 
 * @array: Data structure
 * @size: Size of array
 * @cmp: Pointer to Function
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int cont1 = 0, cont2 = 0;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);

	for (; cont1 < size; cont1++)
	{
		if ((*cmp)(array[cont1]) == 0)
			cont2++;

		if ((*cmp)(array[cont1]) != 0)
			break;
	}
	if (cont2 == size)
		return (-1);

	return (cont2);
}
