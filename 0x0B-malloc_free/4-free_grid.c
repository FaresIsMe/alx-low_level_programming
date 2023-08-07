#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_grid - no
 * @grid:idk
 * @height: idk
 * Return: nothing.
*/

void free_grid(int **grid, int height)
{
	int i;
	
	free(grid);
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}
