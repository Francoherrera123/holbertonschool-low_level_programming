#include "main.h"
/**
 * print_binary - that prints the binary representation of a number
 * @n: Is a number to convert to binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
