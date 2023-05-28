#include "search_algos.h"

/**
 * binary_search - Search a value in a sorted array using binary search
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where the value is found, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int count = 0, result = 0;
	size_t tmp = (size - 1) / 2;

	if (size == 0)
		return (-1);

	printf("Searching in array: ");
	for (count = 0; count <= (int)(size - 1); count++)
		printf("%d%s", array[count], count != (int)(size - 1) ? ", " : "\n");
	if (value > array[tmp])
	{
		result = binary_search(array + tmp + 1, size - tmp - 1, value);
		if (result == -1)
			return (-1);
		else
			return (tmp + 1 + result);
	}
	else if (value < array[tmp])
		return (binary_search(array, tmp, value));
	else
		return (tmp);

}
