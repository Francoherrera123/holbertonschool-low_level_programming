#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Entry point
 * @separator: string between numbers
 * @n: number of arg
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int cont = 0;

	va_start(arg, n);
	for (; cont < n; cont++)
	{
		printf("%d", va_arg(arg, int));
		if (cont != (n - 1))
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
}
