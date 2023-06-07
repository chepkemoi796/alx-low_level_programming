#include <stdio.h>
#include <math.h>
#include "main.h"
/**
 * _sqrt_recursion - print square root
 * @n: argument
 * Return: b
 */
int _sqrt_recursion(int n)
{
int b = sqrt(n);
if (b <= 0)
return (-1);
return (b);
}
