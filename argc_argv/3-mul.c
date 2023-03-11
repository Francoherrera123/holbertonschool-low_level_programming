#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *main - Entry Point
 *@argc: Char
 *@argv: Int
 *Return: If the args != Null return 0 else 1
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
