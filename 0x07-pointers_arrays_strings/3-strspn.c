#include "main.h"
#include <string.h>
/**
 * _strspn - gets the length of a prefix substring
 * @*s: pointer
 * @s: string to be scanned
 * @*accept: pointer
 * @accept: string to scan for
 * Return: n
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int n;
n = strspn(s, accept);
return (n);
}
