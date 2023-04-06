#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * _pow_recursion- returns the value of x raised to the power of y
 * @x: value
 * @y: power
 * Return: (r)
 */
int _pow_recursion(int x, int y)
{
int r;
if (y < 0)
return (-1);
else
r = pow(x, y);
return (r);
}
