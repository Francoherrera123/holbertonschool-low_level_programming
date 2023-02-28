#include "main.h"

/**
 *  puts2 - prints a string and reverse it
 *  @str: string
 */
void puts2(char *str)
{
	int lenght = 0;

	while (str[lenght])
	{

		if (lenght % 2 == 0)
		{
			_putchar(str[lenght]);
		}
		lenght++;
	}
	 _putchar('\n');
}
