#include <stdio.h>
#include <stdlib.h>
/**
 * ^array_range - creates an array of integers
 * @min: smallest values stored
 * @max: largest values stored
 * Return: q
 */
int *array_range(int min, int max)
{
int *q;
int i, n;
if (min > max)
return (NULL);
n = max - min + 1;
q = malloc(sizeof(int) * n);
if ( q == NULL)
return (NULL);
for (i = 0; min <= max; i++)
q[i] = min++;
return (q);
}
