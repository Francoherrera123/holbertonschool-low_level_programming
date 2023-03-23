#include "function_pointers.h"

/**
 * array_iterator - Entry Point
 *
 * @array: Data structure.
 * @size: size of the array
 * @action: function passed by parameters
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int cont;

	if (array == NULL || action == NULL)
		return;

	for (cont = 0; cont < size; cont++)
		(*action)(array[cont])
}
