#include "main.h"
#include <string.h>
/**
 * _strlen - prints length of string
 * @*s: pointer
 * @*str: pointer to variable address
 * @s: variable
 * Return: (len)
 */
int _strlen(char *s)
{
int len = 0;
char *str;
str = s;
len = strlen(str);
return (len);
}
