#include "main.h"
#include <string.h>
/**
 * *_strncat -  concatenates two strings.
 * @*dest: pointer to string to append to
 * @dest: string to append to
 * @*src: pointer to string to append
 * @src: string to append
 * @n: bytes to use in src
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
char *ptr;
ptr = strncat(dest, src, n);
return (ptr);
}
