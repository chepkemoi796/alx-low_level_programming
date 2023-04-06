#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * _sqrt_recursion - returns the natural square root of a number
 * Return: (-1 0r n)
 */
int _sqrt_recursion(int n)
{
if (n < 0 || (int)sqrt(n) % 1 != 0)
{
return (-1);
}
else
return (sqrt(n));
}
