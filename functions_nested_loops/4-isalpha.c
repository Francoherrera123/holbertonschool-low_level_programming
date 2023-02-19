#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Entry point
 * @c: int
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if (isalpha(c) == 0)
	{
		return (0);
	}
	return (1);
}
