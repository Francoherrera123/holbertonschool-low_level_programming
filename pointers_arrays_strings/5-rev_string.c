#include "main.h"

/**
* rev_string - prints a string and reverse it
* @s: string
*/

void rev_string(char *s)
{
	int lenght = 0;
	int i, cont = 0;

	while (*(s + lenght))
		lenght++;
	lenght--;
	
	for (i = 0; lenght >= i; lenght--, i++)
	{
	cont = s[lenght];
	s[lenght] = s[i];
	s[i] = cont;
	}
}
