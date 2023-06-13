#include <stdio.h>
#include <stdlib.h>
char *str_concat(char *s1, char *s2)
{
int i;
int len1 = 0, len2 = 0, size = 0;
for (i = 0; s1[i] != '\0'; i++)
len1++;
for (i = 0; s2[i] != '\0'; i++)
len2++;
size = len1 + len2;
s1 = malloc(sizeof(char*) * size);
if (s1 == NULL)
return (NULL);
else
{
for (i = 0; s1[i] < size; i++)
{
s1[i + len2] = s2[i];
s1[i] = s1[i + len2];
}
}
return (s1);
}
