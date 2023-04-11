#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * *_strdup - duplicates string
 * @*str: pointer
 * @str: string
 * Return: (s)
 */
char *_strdup(char *str)
{
char *s;
if (str == NULL)
{
return (NULL);
}
s = strdup(str);
return (s);
}
