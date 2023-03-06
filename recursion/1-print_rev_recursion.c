#include "main.h"

/**
 *  _print_rev_recursion - prints a string in reverse
 *  @s: char pointer
 */
void _print_rev_recursion(char *s)
{
	_print_rev_recursion(&s[1]);
	_putchar(s[0]);
}
