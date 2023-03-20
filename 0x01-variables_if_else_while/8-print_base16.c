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
char q;
for ((num = 0); (num < 10); num++)
{
putchar((num % 10) + '0');
}
for ((q = 'a'); (q <= 'f'); q++)
{
putchar(q);
}
putchar('\n');
return (0);
}
