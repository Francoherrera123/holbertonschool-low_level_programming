#include "main.h"
/**
 * _strcmp - Copies the string pointed to by src
 *
 * @s1: *char
 * @s2: *char
 * Return: Pointer to destiny
 */

int _strcmp(char *s1, char *s2)
{	
	while (*s1 && *s2)
	{	
		if (*s1 != *s2)
			return (*s1 - *s2);

		s1++;
		s2++;
	}
	return (0);
	
}
