#include "main.h"
#include <string.h>
/**
 * *_memset - fills memory with a constant byte
 * @*s: pointer
 * @s: memory location where memory is set
 * @b: value needed to be copied to
 * @n: number of bytes consumed
 * Return: pointer to dest
 */
char *_memset(char *s, char b, unsigned int n)
{
memset(s, b, n);
return (s);
} 
