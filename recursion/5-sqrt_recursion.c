#include "main.h"
int _sqrt_recursion(int n);

/**
 * _sqrt_recursion_int - the natural square root of a number.
 * @n: number
 * @a: iterator
 * Return: the natural square root of a number.
 */
int _sqrt_recursion_int(int n, int a)
{
	return (n > a ? (a * a == n) ? (a) :
			_sqrt_recursion_int(n, a + 1) : n == 1 ? (1) : (-1));
}
/**
 * _sqrt_recursion - the natural square root of a number.
 * @n: number
 * Return: returns the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_int(n, 1));
}
