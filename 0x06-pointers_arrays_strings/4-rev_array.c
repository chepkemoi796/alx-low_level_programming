#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverse content of string
 * @i: variable for index
 * @q: variable
 * @*a: pointer
 * @a: value of pointer
 * @n: variable 
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i;
int q;
for (i = 0; i < n--; i++)
{
q = a[i];
a[i] = a[n];
a[n] = q;
}
}
