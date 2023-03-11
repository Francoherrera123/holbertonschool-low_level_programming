#include <stdio.h>
#include <stdlib>
#include <string.h>
#include <ctype.h>

/**
 *  main - Entry point
 *
 *  @argc: int
 *  @argv: *char
 *  Return: 0: Success. 1: Error.
 */
int main(int argc, char *argv[])
{
	int all = 0;

	if (argc < 3)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < argc; i++)
	{
		for (x = 0; argv[i][x]; x++)
			if (!isdigit(argv[i][x]))
			{
				printf("Error\n");
				return (1);
			}
		all += atoi(argv[i]);

	}

	printf("%d\n", all);
	return (0);
}
