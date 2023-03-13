#include "main.h"
#include <stdlib.h>
/**
 * *create_array - function that creates an array of chars, and initializes it with a specific char
 *@size: int
 *@c: char
 */
char *create_array(unsigned int size, char c)
{
	char *arry = malloc(sizeof(char) + size);
	int i;

	if (size > 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arry[i] = c;
		
	}
	return (arry);
}
