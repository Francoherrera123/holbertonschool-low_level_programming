#include "main.h"

/**
 * times_table - Entry point
 */
void times_table(void)
{
	int num = 0, multiple )= 0;

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
			 multiple++;
		}
		else
		{
			_putchar('\n');
			multiple = 0;
			num++;
		}
	}
}
