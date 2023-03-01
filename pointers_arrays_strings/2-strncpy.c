#include "main.h"
/**
 * *_strncpy - Copies the string pointed to by src
 *
 * @dest: *char
 * @src: *char
 * @n: int
 * Return: Pointer to destiny
 */
char *_strncpy(char *dest, char *src, int n)
{
	int destCont = 0;
	int contSrc = 0;

	while (src[contSrc])
		contSrc++;

	while (destCont < n)
	{
		dest[destCont] = src[destCont];

		if (src[destCont] == '\0')
			break;

		destCont++;
	}
	while (destCont < n)
	{
		dest[destCont++] = '\0';
	}

	return (dest);
}
