#include <stdio.h>
#include <stdlib.h>
/*
 * factorial - prints factorial of a number
 *
 * Return: void
 */
int factorial(int n)
{
int b;
if (n < 1)
return (1);
else
b = n * factorial(n - 1);
return b;
}
