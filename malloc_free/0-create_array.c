#include "main.h"
#include <stdlib.h>
/**
 *create_array - function that creates an array of char
 *@size: int
 *@c: char
 *Return: p
 */
char *create_array(unsigned int size, char c)
{
	char *arry = malloc(sizeof(char) * size);
	unsigned int i;

	if (size <= 0)
		return (NULL);
	if (arry == NULL)
		return (arry);
	for (i = 0; i < size; i++)
	{
		arry[i] = c;

	}
	return (arry);
}
