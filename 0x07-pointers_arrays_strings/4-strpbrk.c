#include "main.h"
#include <string.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @*s: pointer
 * @*accept: pointer
 * @s: variable
 * @accept: variable
 * Return: t
 */
char *_strpbrk(char *s, char *accept)
{
char *t;
t = strpbrk(s, accept);
return (t);
}
