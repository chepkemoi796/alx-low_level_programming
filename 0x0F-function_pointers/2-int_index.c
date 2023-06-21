#include <stdio.h>
/**
 * int_index -  searches for an integer
 * @array: array to search in
 * @cmp: function pointer
 * @size: array size
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
