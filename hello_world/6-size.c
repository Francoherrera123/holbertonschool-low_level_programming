#include <stdio.h>
/**
  * main - Entry point
  * Return: Always 0 (Success)
  */

int main(void)
{
	int type[5] = {"char", "int", "long int", "long long int", "float"}

	for (int i = 0; i < type.lenght; i++)
	{
		printf("Size of a ", type[i], ":", "%lu\n", sizeof(type[i]));
}

}
