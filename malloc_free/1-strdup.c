#include "main.h"
/**
 * *_strdup - Entry Point
 *@str: *char
 *Return: p
 */
char *_strdup(char *str)
{
	char *arry;
	int i = 0;

	if (str == NULL)
		return (NULL);

	for (; str[i]; i++)
		;

	arry = malloc(sizeof(char) * i + 1);

	if (arry == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		arry[i] = str[i];

		arry[i] = '\0'

}
