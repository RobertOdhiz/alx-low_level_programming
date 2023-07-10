#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - concatenates two strings
* @width: width
* @height: height
* Return: NULL for failure grid for success
*/

int **alloc_grid(int width, int height)
{
	int i = 0, j = 0, k = 0, l = 0;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = i; j >= 0; j--)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
	}
	for (; k < height; k++)
	{
		for (; l < width; l++)
			grid[k][l] = 0;
	}
	return (grid);
}
