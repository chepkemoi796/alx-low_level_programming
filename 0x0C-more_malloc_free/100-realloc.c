#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_realloc -  reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: size for ptr 
 * @new_size: new size of new memory
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *a;
char *b;
unsigned int i;
if (new_size == old_size)
{
return (ptr);
}
if (new_size == 0 && ptr)
{
free(ptr);
return (NULL);
}
if (!ptr)
{
return (malloc(new_size));
}
a = malloc(new_size);
if (!a)
{
return (NULL);
}
b = ptr;
if (new_size < old_size)
{
for (i = 0; i < new_size; i++)
a[i] = b[i];
}
if (new_size > old_size)
{
for (i = 0; i < old_size; i++)
a[i] = b[i];
}
free(ptr);
return (a);
}
