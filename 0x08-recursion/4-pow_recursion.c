#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"
/**
 * _pow_recursion - returns the power of a number
 *@x: base
 *@y: power
 * Return: void
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
