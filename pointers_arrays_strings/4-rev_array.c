#include "main.h"
/**
 *reverse_array - prints a string and reverse it
 *@a: *int
 *@n: int
 */

void reverse_array(int *a, int n)
{
	int reverse = 0;
	int b = 0;

	n = n - 1;
	while (n > reverse)
	{
		b = a[n];
		a[n] = a[reverse];
		a[reverse] = b;
		n--;
		reverse++;

	}
}
