#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - return pointer to 2d array
 * @width: row
 * @height:column
 * @i:index
 * @j:index
 * Return: p
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **p;
width = 0;
height = 0;
if (width <= 0 || height <= 0)
return (NULL);
p = malloc(height * sizeof(int));
if (p == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
p[i] = malloc(sizeof(int) * width);
if (p[i] == NULL)
return (NULL);
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
p[i][j] = 0;
}
return (p);
}
