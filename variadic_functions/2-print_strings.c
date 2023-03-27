#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Entry point
 * @separator: word separator
 * @n: cant args
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list lista;
	unsigned int cont = 0;
	char *character;

	va_start(list, n);

	for (; cont < n; cont++)
	{
		character = va_arg(list, char*);
		(character == null) ? printf("(nil)") : printf("%s", character);

		if ((cont + 1 != n) && (separator != NULL))
			printf("%s", separator);
	}
	putchar('\n');
	va_end(list);
}
