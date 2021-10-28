#include <stdlib.h>
/**
* free_grid - Libera space of grid
*
*@grid: puntero a matriz
*@height: altura
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
