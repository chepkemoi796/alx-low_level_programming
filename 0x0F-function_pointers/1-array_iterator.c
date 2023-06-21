#include <stdio.h>
/**
 * array_iterator - executes a function given as a parameter on each element
 * @array: the array
 * @size: size
 * @action: function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
for (i = 0; i < size; i++)
action(array[i]);
}