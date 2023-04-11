#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - pointer to array
 * @size: unsigned int
 * @c: character variable
 * *buffer: pointer
 * Return: (buffer)
 */
char *create_array(unsigned int size, char c)
{
char *buffer;
unsigned int i;
buffer = malloc((size + 1) * sizeof(char));
if (buffer == NULL)
{
return (NULL);
}
if (size == 0)
{
return (NULL);
}
i = 0;
while (i < size)
{
buffer[i] = c;
i++;
}
buffer[i] = '\0';
return (buffer);
}
