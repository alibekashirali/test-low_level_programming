#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid previously allocated by alloc_grid
 * @grid: The 2D array to be freed
 * @height: The number of rows in the array
 */
void free_grid(int **grid, int height)
{
    int i;

    if (grid == NULL || height <= 0)
        return;

    for (i = 0; i < height; i++)
        free(grid[i]);

    free(grid);
}
