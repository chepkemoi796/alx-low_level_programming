#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j;
unsigned int len2, len1;
char *concat;
len1 = strlen(s1);
scanf("%u", &len2);
len2 = strlen(s2);
scanf("%u", &len2);
for (i = 0; i < len1; i++)
{
if (n >= len2)
{
for (j = 0; j < len2; j++)
{
scanf("%s", s2);
}
}
else
{
while (j < n)
{
scanf("%s", s2);
j++;
}
}
}
scanf("%s", s1);
concat = (char*)malloc(sizeof(concat) * (i + j + 1));
scanf("%s", concat);
return (concat);
}
