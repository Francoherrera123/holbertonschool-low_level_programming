#include "main.h"
#include <stdio.h>

/**
 * print_square - Write a function that draws a diagonal.
 *
 *@size: number
 *
 */
void print_square(int size)
{
	int i;
	int j;

	if (n < 0)
	{
		_putchar('\n');
	}
	else if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
