#include "main.h"
/**
 * *_strcat - Copies the string pointed to by src
 *
 * @dest: *char
 * @src: *char
 * Return: Pointer to destiny
 */
char *_strcat(char *dest, char *src)
{
	int destCont = 0;
	int contSrc = 0;

	while (dest[destCont])
		destCont++;

	while (src[contSrc])
	{
		dest[destCont] = src[contSrc];
		destCont++;
		contSrc++;
	}

	return (dest);
}
