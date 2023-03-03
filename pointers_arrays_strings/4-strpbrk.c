#include "main.h"

/**
 * *_strpbrk - Searches a string for any of a set of bytes
 *
 * @s: *char
 * @accept: *char
 * Return: Pointer to s
 */
char *_strpbrk(char *s, char *accept)
{


	int a = 0;

	int b = 0;

	while (s[a])
	{
		while (accept[b])
		{
			if (s[a] == accept[b])
				return (s + a);

			b++;
		}
		b = 0;
		a++;
	}

	while (accept[b])
	{
		if (s[a] == accept[b])
			return (s + a);

		b++;
	}
	return (0);

}
