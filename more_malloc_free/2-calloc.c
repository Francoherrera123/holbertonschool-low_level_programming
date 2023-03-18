#include "main.h"

/**
 * _calloc - Entry Point
 * @nmemb: int
 * @size: int
 * Return: a pointer allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int cont = 0;
	char *arry;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arry = malloc(nmemb * size);

	if (arry == NULL)
		return (NULL);

	for (; cont < (nmemb * size); cont++)
		arry[cont] = 0;

	return (arry);

}
