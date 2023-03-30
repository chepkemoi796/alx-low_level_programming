#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverse content of string
 * @*a: pointer
 * @a: value of pointer
 * @n: variable 
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i;
char q;
for (i = 0; n / 2; i++)
{
q = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = a[i];
}
printf("%d", q);
}
