#include "main.h"
/**
 * times_table - Print the 9 times table.
 */
void times_table(void)
{
	int num = 0, multiple = 0;

	while (num < 10)
	{
		int result = num * multiple;

		if (multiple > 0)
		_putchar((result / 10) ? result / 10 + '0' : ' ');
		_putchar(result % 10 + '0');

		if (multiple < 9)
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
