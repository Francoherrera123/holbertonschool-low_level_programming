#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Write a function that draws a diagonal.
 *
 *@n: number
 *
 */
void print_diagonal(int n)
{
	int i;

	if (n == 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar('\n');
	}
	else
	{
		_putchar(92);
		_putchar('\n');
	}
}
