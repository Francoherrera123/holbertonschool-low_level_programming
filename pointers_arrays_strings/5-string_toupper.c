#include "main.h"

/**
 * string_toupper - Always look up
 *
 * @chango: string to uppercase
 *
 * Return: Always 0 (Success)
 */
char *string_toupper(char *chango)
{
	int recor = 0;
	int i;

	while (chango[recor])
	{
		if (chango[recor] >= 97 && chango[recor] <= 122)
		{
			chango[recor] -= 32;
		}
		recor++;
		
	}
	return (chango);
}
