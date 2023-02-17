#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	int l;

	for (l = 0; l < 10; l++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
			_putchar('\n');
	}
}
