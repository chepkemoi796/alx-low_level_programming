#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_strdup -  returns a pointer to a newly allocated space
 * @str: pointer to string
 * Return: p
 */
char *_strdup(char *str)
{
char *p;
p = malloc(sizeof(char*));
if (p == NULL)
return (NULL);
else
{
p = strdup(str);
if (str == NULL)
return (NULL);
else
return (p);
}
}
