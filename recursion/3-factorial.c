#include "main.h"
/**
 * factorial - factorial of a number
 * @n: integer pointer
 * Return: returns the factorial of a given number.
 */
int factorial(int n)
{
	return (n > 0 ? (factorial(n - 1) * n) : n == 0 ? 1 : -1);
}
