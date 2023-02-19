#include "main.h"

/**
 * times_table - Entry point
 */
void times_table(void)
{
	int num = 0, multiiple )= 0;

	while (num < 10)
	{
		int result = num * multiple;

		if (multi > 0)
		_putchar((result / 10) ? result / 10 + '0' : ' ');
		_putchar(result % 10 + '0');

		if (multi < 9)
		{
			 _putchar(',');
			 _putchar(' ');
			 multi++;
		}
		else
		{
			_putchar('\n');
			multi = 0;
			num++;
		}
	}
}
