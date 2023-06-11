#include <stdio.h>
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
