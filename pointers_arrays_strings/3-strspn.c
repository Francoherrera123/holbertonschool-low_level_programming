#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring
 *
 * @s: *char
 * @accept: char
 * Return: Num of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k = 0;

	while (s[i])
	{
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				k++;
				i++;
				j = -1;
			}
			b++;
		}
		b = 0;

		i++

		if (c != 0)
		{
			break;
		}
	}
	return (k);
}
