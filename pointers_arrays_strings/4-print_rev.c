#include "main.h"
#include <stdio.h>
/**
* print_rev - prints a string in reverse
*
* @s: char
*
*/
void print_rev(char *s)
{
	int i = 0;
	int n;

	while (s[i] != '\0')
	{
		i++;
	}
		for (n = i - 1; n <= i && n >= 0; n--)
	{
		_putchar(s[n]);
	}

	_putchar('\n');
}
