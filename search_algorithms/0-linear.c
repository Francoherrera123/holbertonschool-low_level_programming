#include "search_algos.h"

/**
 * linear_search - Search for a value in an array using linear search algorithm
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where the value is found, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t count = 0;

	for (count = 0; count < size; count++)
	{
		printf("Value checked array[%li] = [%i]\n", count, array[count]);

		if (array[count] == value)
			break;
	}
	return ((count < size) ? (int)count : -1);
}
