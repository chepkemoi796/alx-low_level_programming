#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src
 * @*dest: pointer
 * @dest: variable
 * @src: variable
 * @*src: pointer for variable
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int l = 0;
int x = 0;
while (*(src + 1) != '\n')
{
l++;
}
for (; x < l; x++)
{
dest[x] = src[x];
}
dest[l] = '\0';
return (dest);
}
