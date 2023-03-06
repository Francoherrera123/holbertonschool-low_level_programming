#include "main.h"
int is_prime_number_int(int n, int a);
/**
 * is_prime_number_int - the input integer is a prime number
 * @n: int
 * @a: int
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number_int(int n, int a)
{
	return (n > a ? (n % a == 0) ? (1) : is_prime_number_int(n, a + 1) : (0));
}
/**
 * is_prime_number - the input integer is a prime number
 * @n: int
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	return (is_prime_number_int(n, 1));
}
