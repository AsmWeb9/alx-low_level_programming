#include "main.h"
/**
 * free_grid - a function that frees a 2 dimensional
 * grid previously created by your
 * alloc_grid function.
 * @grid: an integer duble pointer
 * @height: an integer
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
