#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Returns 1 if c is a digit
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int i;
	int j;

	for (j = 0; i <= 9; i++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
