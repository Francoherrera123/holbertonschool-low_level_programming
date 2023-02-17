#include "main.h"
#include <ctype.h>

/**
 * _islower - Entry point
 * @c: int
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (islower(c) != 0)
	{
		return (1);
	}
	return (0);
}
