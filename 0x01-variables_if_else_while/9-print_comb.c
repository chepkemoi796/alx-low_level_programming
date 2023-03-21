#include <stdio.h>
/**
 * main - entry point
 *
 * Return: (0) Always (Success)
 *
 */
int main(void)
{
int num;
for ((num = 1); (num < 11); num++)
putchar((num % 10) + '0');
if (num != 10)
putchar(',');
putchar(' ');
putchar('\n');
return (0);
}
