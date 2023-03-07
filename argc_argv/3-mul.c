#include <stdio.h>
/**
 *main - Entry Point
 *@argc: Char
 *@argv: Int
 *Return: If the args != Null return 0 else 1
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argv[1] != NULL && argv[2] != NULL)
	{
		sum = argv[1] * argv[2];
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("Error");
		return (1);
	}
}
