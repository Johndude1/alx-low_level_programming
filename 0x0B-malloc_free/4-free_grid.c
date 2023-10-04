#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* free_grid - a function that frees 2d array
* @grid: A 2d grid
* @height: the height of the dimension of a grid
* Description: it will free the  memory of the grid
* Return: nothing
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
