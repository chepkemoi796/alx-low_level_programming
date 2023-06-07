#include <stdio.h>
#include <stdlib.h>
/**
 * factorial - prints factorial of a number
 *@n: argument
 * Return: b
 */
int factorial(int n)
{
int b;
if (n < 1)
return (-1);
if (n == 1)
return (1);
b = n * factorial(n - 1);
return (b);
}
