#include "main.h"

/**
 * *_strstr - Locates a substring
 *
 * @haystack: *char
 * @needle: *char
 * Return: Pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int cont = 0;
	int CE = 0;
	int ini = 0;
	int recor;

	if (needle[0] == '\0')
		return (haystack + 0);

	while (haystack[CE])
	{
		recor = CE;

		while (needle[cont] == haystack[recor])
		{
			if (ini == 0)
				ini = recor;

			cont++;
			recor++;

			if (needle[cont] == '\0')
				return (haystack + CE);

		}
		cont = 0;
		ini = 0;
		CE++;
	}
	return (0);
}
