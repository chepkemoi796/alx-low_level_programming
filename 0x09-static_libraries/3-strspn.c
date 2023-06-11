#include <stdio.h>
#include <string.h>
unsigned int _strspn(char *s, char *accept)
{
unsigned int n;
n = strspn(s, accept);
return (n);
}
