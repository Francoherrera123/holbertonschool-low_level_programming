#include "main.h"
#include <stdio.h>
/**
 *  print_array - prints a string and reverse it
 *  @a: int
 *  @n: int
 */
void print_array(int *a, int n)
{
	int b, c;

	for (b = 0; b < n; b++)
	{
		if (b < 4)
		{
			printf("%d", a[b]);
			printf(",");
			printf(" ");
		}
		
	}
	 _putchar('\n');
}
