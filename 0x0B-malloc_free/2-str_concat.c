#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *str_concat(char *s1, char *s2)
{
char *s;
int i = 0;
int count = 0;
int len1, len2;
if (s1 == NULL)
s1 = "";
if (s1 == NULL)
s2 = "";
len1 = strlen(s1);
len2 = strlen(s2);
for (s1[i] = 0; s[i] != '\0'; i++)
for (s2[count] = 0; s2[count] != '\0'; count++)
s = malloc(sizeof(char) * (len1 + len2 + 1));
if (s == NULL)
return (NULL);
while (s1[i] != '\0')
{
s[i] = s1[i];
}
while (s2[count] != '\0')
{
s[i] = s2[count];
i++, count++;
}
s[i] = '\0';
return (s);
}
