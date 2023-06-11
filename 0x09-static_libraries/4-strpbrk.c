#include <stdio.h>
#include <string.h>
char *_strpbrk(char *s, char *accept)
{
char *t;
t = strpbrk(s, accept);
return (t);
}
