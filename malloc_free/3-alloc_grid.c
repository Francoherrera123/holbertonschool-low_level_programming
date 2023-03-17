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

	malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);
	for (rows = 0; rows < height; rows++)
	{
		grid[rows] = malloc(sizeof(int) * width);

		if (grid[rows] != NULL)
			continue;

		for (rows--; rows >= 0; rows--)
			free(grid[rows]);

		free(grid);
		return (NULL);

	}
	for (rows = 0; rows < height; rows++)
		for (columns = 0; columns < width; columns++)
			grid[rows][columns] = 0;
	return (grid);
}
