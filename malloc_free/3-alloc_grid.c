#include "main.h"
/**
 * **alloc_grid - Entry Point
 *@width: int
 *@height: int
 *
 * Return: p
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int columns, rows;

	if (width <= 0 || height <= 0)
		return (NULL);

	malloc(sizeof(int *) * height)

	if (grid == NULL)
		return (NULL);
	for (rows = 0; rows < height; rows++)
	{
		grid[rows] = malloc(sizeof(int) * widht)

		if (grid[rows] != NULL)
			continue;

		for (y--; rows >= 0; rows--)
			free(grid[rows]);

		free(grid);
		return (NULL);

	}
	for (rows = 0; rows < height; rows++)
		for (x = 0; x < width; x++)
			grid[y][x] = 0;
	return (grid);
}
