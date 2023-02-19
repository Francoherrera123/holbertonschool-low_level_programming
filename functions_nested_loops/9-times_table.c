#include "main.h"

/**
 * times_table - Entry point
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int loop;
	int table;

	for (table = 0; table < 10; table++)
	{
		for (loop = 0; loop < 10; loop++)
		{
			int result = loop * table;
			_putchar(result);
			_putchar(44);
			_putchar(32);
		}
		_putchar('\n');
	}
}
