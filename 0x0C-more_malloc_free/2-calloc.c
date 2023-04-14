#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_memset - fills block of memory
 * @d: memory assigned
 * @r: character 
 * @n: times to copy
 * Retrun: pointer
 */
char *_memset(char *d, char r, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
d[i] = r;
}
return (d);
}
/**
 * *_calloc - allocates memory
 * @nmemb: elements number
 * @size: size of element
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *b;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
b = malloc(size * nmemb);
if (b == NULL)
{
return (NULL);
}
_memset(b, 0, nmemb * size);
return (b);
}
