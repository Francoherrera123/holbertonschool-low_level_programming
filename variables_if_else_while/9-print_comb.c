#include <stdio.h>

 /**
   * main - Entry point
   *
   * Return: Always 0 (Success)
   */
int
main(void) /*this main does something */
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 9)
		{
			putchar(i);
			putchar(44);
			putchar(32);
		}
		else
		{
			putchar(i);
		}
	}
		putchar('\n');

	return (0);
}
