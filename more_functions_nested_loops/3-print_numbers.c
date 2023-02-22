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

	for (i = 48;i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
