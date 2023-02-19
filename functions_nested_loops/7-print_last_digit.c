#include "main.h"

/**
 * print_last_digit - Entry point
 * @n: int
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int J = n % 10;

	if (J < 0)
	{
		J = J * -1;
	}

	_putchar(J + '0');
	return (J);

}
