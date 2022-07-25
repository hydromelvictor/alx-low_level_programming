#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*free_grid -  frees a 2 dimensional grid previously created
*@grid: parameter
*@height: parameter
*/
void free_grid(int **grid, int height)
{
int i = 0;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}

