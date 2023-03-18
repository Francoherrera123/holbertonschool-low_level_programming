#include "main.h"

/**
 * string_nconcat - Entry Point
 * @s1: char
 * @s2: char
 * @n: int
 * Return: Strings concatenated
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0;
	char *arry;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (; s1[cont1]; cont1++)
		;
	for (; s2[cont2]; cont2++)
		;

	if (n >= con2)
		n = cont2;

	arry = malloc((cont1 + n + 6) * sizeof(char));

	if (arry == NULL)
		return (NULL);

	for (; s1[cont3]; cont3++)
		arry[cont3] = s1[cont3];

	for (; cont4 < n; cont4++)
		arry[cont3 + cont4] = s2[cont4];

	arry[cont3 + cont4] = '\0';

	return (arry);
}
