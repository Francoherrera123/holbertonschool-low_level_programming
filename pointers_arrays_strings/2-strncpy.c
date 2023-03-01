#include "main.h"
/**
 * *_strncat - Copies the string pointed to by src
 *
 * @dest: *char
 * @src: *char
 * @n: int
 * Return: Pointer to destiny
 */
char *_strncat(char *dest, char *src, int n)
{
	int destCont = 0;
	int contSrc = 0;

	while (dest[destCont])
		destCont++;

	while (contSrc < n)
	{
		dest[destCont] = src[contSrc];
		destCont++;

		if (src[contSrc] == '\0')
			break;

		contSrc++;
	}
	while (contSrc < n)
	{
		dest[destCont++] = '\0';
	}

	return (dest);
}
