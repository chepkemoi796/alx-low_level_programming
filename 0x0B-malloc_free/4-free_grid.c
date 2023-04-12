#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: 2d
 * @height: dimensions
 * Return: void
 */
void free_grid(int **grid, int height)
{
int count;
for (count = 0; count < height; count++)
{
free(grid[count]);
}
free(grid);
}
