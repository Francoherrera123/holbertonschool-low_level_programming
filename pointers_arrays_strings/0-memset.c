#include "main.h"

/**
 * _memset - Development of the function.
 *
 * @s: char than point to b, (byte in memory).
 * @b: constant byte (char - array).
 * @n: Numbers of bytes of memory.
 * Return: char.
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int recor = 0;

	for (; recor < n; recor++)
	{
		s[recor] = b;
	}
	return(s);
}
