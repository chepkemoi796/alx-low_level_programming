#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *array_range - creates an array of integers
 * @min: smallest value
 * @max: largest value
 * Return: pointer
 */
int *array_range(int min, int max)
{
int *b;
int i, n;
if (min > max)
{
return (NULL);
}
n = max - min + 1;
b = malloc(sizeof(int) * n);
if (b == NULL)
{
return (NULL);
}
for (i = 0; min <= max; i++)
{
b[i] = min++;
}
return (b);
}
