#include "main.h"

/**
 * *cap_string - Always look up
 *
 * @upp: string to uppercase
 *
 * Return: Always 0 (Success)
 */
char *cap_string(char *upp)
{
	int recor = 0;

	while (upp[recor])
	{
		if (upp[recor] >= 97 && (upp[recor] <= 122 && upp[recor]  == upp[0]))
			upp[recor] -= 32;

		if (upp[recor] >= 97 && upp[recor] <= 122)
		{
			switch (upp[recor] -1)
			{
				case 32:
				case 44:
				case 59:
				case 46:
				case 10:
				case 9:
				case 33:
				case 63:
				case 34:
				case 40:
				case 41:
				case 123:
				case 125:
					upp[recor] -= 32;
			}
		}
		
		recor++;
	}
	return (upp);
}
