#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *create_array -  creates an array of chars
 * @c: character
 * @size: the size of array
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *buffer = &c;
if (size == 0)
return (NULL);
buffer = malloc(size);
for (i = 0; i < size; i++)
buffer[i] = c;
if (buffer == NULL)
return (NULL);
else
return (buffer);
}
