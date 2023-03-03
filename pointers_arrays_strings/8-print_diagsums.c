#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 *
 * @a: *char
 * @size: int
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int recor = 0;
	long int sum = 0, sizem = size * size;

	for (; recor < sizem; recor += size + 1)
		sum += a[recor];

	printf("%li, ", sum);
	sum = 0;

	for (recor = size - 1; recor <= sizem - size + 1; recor += size - 1)
		sum += a[recor];

	printf("%li\n", sum);

}
