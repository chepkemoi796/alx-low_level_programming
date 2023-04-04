#include "main.h"
#include <string.h>
/**
 * *_memcpy - copies memory area
 * @*dest: pointer
 * @*src: pointer
 * @dest: memory to copy to
 * @src: memory to copy from
 * @n: variable
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
memcpy(dest, src, n);
return (dest);
}
