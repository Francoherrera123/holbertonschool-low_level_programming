#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDigit = n % 10;

	printf("Last digit of %d is %d", n, lastDigit);
	if (lastDigit > 5)
	{
		printf("and is greater than 5\n", lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("and is 0\n", lastDigit));
	}
	else
	{
		printf("and is less than 6 and not 0\n", lastDigit);
	}

	return (0);
}
