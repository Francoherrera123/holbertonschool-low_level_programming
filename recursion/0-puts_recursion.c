#include "main.h"
/**
 * _puts_recursion - prints a string followed by a new line
 * @s: char pointer
 */

void _puts_recursion(char*s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
	}

	if (*s != '\n')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}