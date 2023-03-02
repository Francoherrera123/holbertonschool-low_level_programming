#include "main.h"

/**
 * _memcpy - Development of the function.
 *
 * @dest: array to save src
 * @src: array to contain the content  (memory)
 * @n: Numbers of bytes of memory.
 * Return: char.
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int recor = 0;

	for (; recor < n; recor++)
	{
		dest[recor] = src[recor];
	}
	return (dest);
}
