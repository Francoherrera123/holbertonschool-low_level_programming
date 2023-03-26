#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Entry point
 *
 * @n: const unsigned int
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int cont = 0;
	int sum = 0;

	va_start(list, n);

	for (; cont < n; cont++)
		sum += va_arg(list, int);

	va_end(list);
	return (sum);
}
