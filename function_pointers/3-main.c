#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - main
 *
 * @argc: int
 * @argv: char pointer
 *
 * Return: int
 */
int main (int argc, char *argv[])
{
	int var1;
	int var2;
	int (*f)(int, int);
	int resul = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	var1 = atoi(argv[1]);
	var2 = atoi(argv[3]);

	f = get_op_func(argv[2]);

	if (strlen(argv[2]) != 1 || f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((var2 == 0) && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	resul = (*f)(var1, var2);
	printf("%d\n", resul);
	return (0);



}
