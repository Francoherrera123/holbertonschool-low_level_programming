#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_all - Entry point
 * @format: list types of args
 */
void print_all(const char * const format, ...)
{
	va_list sup;
	int rd = 0, is_format;
	char *string;

	va_start(sup, format);
	while (format != NULL && format[rd] != '\0')
	{
		is_format = 1;
		switch (format[rd])
		{
			case 'c':
				printf("%c", va_arg(sup, int));
				break;
			case 'i':
				printf("%d", va_arg(sup, int));
				break;
			case 'f':
				printf("%f", va_arg(sup, double));
				break;
			case 's':
				string = va_arg(sup, char *);
				if (string == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
			default:
				is_format = 0;
				break;

		}
		if (format[rd + 1] && is_format)
			printf(", ");
		rd++;
	}
	printf("\n");
}
