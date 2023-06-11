#include <stdio.h>
#include <string.h>
char *_strncpy(char *dest, char *src, int n)
{
char *ptr;
ptr = strncpy(dest, src, n);
return (ptr);
}
