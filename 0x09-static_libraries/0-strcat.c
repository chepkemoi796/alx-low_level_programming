#include "main.h"
#include <string.h>
/**
 * *_strcat - concatenates two strings
 * @*dest: string to append to
 * @*src: string to append
 * @dest: string value
 * @src: string
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
char *ptr;
ptr = strcat(dest, src);
return (ptr);
}
