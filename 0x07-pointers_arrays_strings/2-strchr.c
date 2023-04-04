#include "main.h"
#include <string.h>
/**
 * *_strchr -  locates a character in a string
 * @*s: pointer
 * @c: a cahracter in the string
 * @*f: pointer
 * Return: f
 */
char *_strchr(char *s, char c)
{
char *f;
f = strchr(s, c);
return (f);
}
