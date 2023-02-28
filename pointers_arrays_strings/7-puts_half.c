#include "main.h"

/**
 *  puts_half - prints a string and reverse it
 *  @str: char
 */
void puts_half(char *str)
{
	int lenght = 0;

	int i = 0;

	while (str[lenght])
	{
		lenght++;
	}

	i = lenght;

	i = lenght / 2;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
