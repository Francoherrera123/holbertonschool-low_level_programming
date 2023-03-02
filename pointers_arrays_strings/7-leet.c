#include "main.h"
/**
 * leet - This function change a letter for a specific number.
 *
 * @rucula: array
 *
 * Return: char.
 */
char *leet(char *rucula)
{
	int count;
	int count2;

	char change[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char check[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	for (count = 0; rucula[count]; count++)
	{
		for (count2 = 0; check[count2]; count2++)
			if (rucula[count] == check[count2])
				rucula[count] = change[count2];
	}
	return (rucula);
}
