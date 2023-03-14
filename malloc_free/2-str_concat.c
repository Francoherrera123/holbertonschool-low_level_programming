#include "main.h"
/**
 * *str_concat - Entry Point
 *@s1
 *@s2
 *Return: p
 */
char *str_concat(char *s1, char *s2)
{
	char *arry;
	unsigned int tam1 = 0, tam2 = 0, a = 0, b = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (; s1[tam1]; tam1++)
		;

	for (; s2[tam2]; tam2++)
		;

	arry = malloc(sizeof(char) * ((tam1 + tam2) + 1));

	if (arry == NULL)
		return (NULL);

	for (; s1[a] != '\0'; a++)
		arry[a] = s1[a];

	for (; s2[a + b]; b++)
		arry[a + b] = s2[b];
	
	arry[a + b] = '\0';

	return (arry);
}
