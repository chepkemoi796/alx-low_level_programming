#include <string.h>
/**
 * _strncpy - copies a string
 * @*dest: ppointer to string
 * @dest: string to copy to
 * @*src: pointer to string
 * @src: string to be copied
 * @n: size
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
char *ptr;
ptr = strncpy(dest, src, n);
return (ptr);
}
