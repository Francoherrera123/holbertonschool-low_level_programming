#include "main.h"

/**
 * print_triangle - Write a function that draws a diagonal.
 *
 *@size: number
 *
 */
void print_triangle(int size)
{
	int i;
	int j;
	int n;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = i; j <= size; j++)
			{
				if (j == size)
				{
					for (n = i; n >= 1; n--)
					{
						_putchar(35);
					}
				}
				if (j != size)
				{
					_putchar(35);
				}
			}
		_putchar('\n');
		}
	}
}
