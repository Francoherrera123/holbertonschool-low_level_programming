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
	int value1;
	int value2;

	if (argv[1] != NULL && argv[2] != NULL)
	{
		value1 = argv[1];
		value2 = argv[2];
		sum = value1 * value2;
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("Error");
		return (1);
	}
}
