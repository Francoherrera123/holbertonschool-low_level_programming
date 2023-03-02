#include "main.h"

/**
 * *_strchr - Locates a char in a string
 *
 * @s: *char
 * @c: char
 * Return: Pointer to the first occurence
 */
char *_strchr(char *s, char c)
{
	int recor = 0;

	for (; s[recor] != '\0'; recor++)
	{
		if (s[recor] == c)
			return (s + recor);
	}
	if (c == 0)
		return (s + 1);


	return (0);
}
