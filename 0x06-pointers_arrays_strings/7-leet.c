#include "main.h"
/**
 * *leet - encodes string
 * @i: variable
 * @j: variable
 * @a: string
 * @b: string
 */
char *leet(char *n)
{
int i;
int j;
char a[] = "aAeEoOtTlL";
char b[] = "443007711";
for (i = 0; n[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (n[i] == a[j])
{
n[i] = b[j];
}
}
}
return (n);
}
