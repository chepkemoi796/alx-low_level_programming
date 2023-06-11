#include <stdio.h>
#include <string.h>
char *_strncat(char *dest, char *src, int n)
{
char *ptr;
ptr = strncat(dest, src, n);
return (ptr);
}
