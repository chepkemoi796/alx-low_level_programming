#include "main.h"
#include <stdlib.h>
int **alloc_grid(int width, int height)
{
int a;
int b;
int **d;
if (width <= 0 || height <= 0)
{
return (NULL);
}
d = malloc(sizeof(int*) * height);
if (d == NULL)
{
return (NULL);
}
for (a = 0; a < height; a++)
{
d[a] = malloc(sizeof(int) * width);
if (d[a] == NULL)
{
while (a >= 0)
a--;
free(d[a]);
free(d);
return (NULL);
}
}
for (a = 0; a < height; a++)
{
for(b = 0; b < width; b++)
d[a][b] = 0;
}
return (d);
}
