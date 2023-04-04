#include "main.h"
#include <string.h>
/**
 * *_strstr - locates a substring.
 * @*haystack: pointer
 * @*needle: pointer
 * @haystack: string to be scanned
 * @needle:string to be searched with
 * @*t: pointer
 * Return: t
 */
char *_strstr(char *haystack, char *needle)
{
char *t;
t = strstr(haystack, needle);
return (t);
}
