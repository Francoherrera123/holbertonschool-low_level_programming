#include "main.h"

/**
 *  print_array - prints a string and reverse it
 *  @a: int
 *  @n: int
 */
void print_array(int *a, int n)
{

	while (a[n])
	{

		_putchar(str[n]);
		_putchar(',');
		_putchar(' ');
		n++;
	}
	 _putchar('\n');
}
