#include <stdio.h>
#include <stdlib.h>
/*
 * _pow_recursion - returns the power of a number
 *
 * Return: void
 */
int _pow_recursion(int x, int y)
{
int power;
if (y < 0)
return (-1);
else
power = pow(x, y);
return (power);
}
