#include "main.h"

/**
 *  puts2 - prints a string and reverse it
 *  @str: string
 */
void puts2(char *str)
{
	int i;
	int lenght = 0;

	while (*(str + lenght))
		lenght++;

	for (i = 0; i <= lenght; i++)
		if (i / 2 == 0)
		{
			_putchar(str[i]);
		}
}
