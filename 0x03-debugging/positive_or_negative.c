#include "main.h"
/**
 * positive_or_negative - checks if number is positive or negative
 *
 * @i: the number to be checked
 *
 * Return: (0) Always (Success)
 *
 */
void positive_or_negative(int i)
{

if (i > 0)
printf("%d is positive\n", i);
else if (i < 0)
printf("%d is negative\n", i);
else
printf("%d is zero\n", i);
}
