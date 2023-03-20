#include <stdio.h>
/**
 * main - entry point
 *
 * Return: (0) Always (Success)
 *
 */
int main(void)
{
char d;
for ((d = 'a'); (d <= 'z'); d++)
{
if (d != 'e' && d != 'q')
putchar(d);
}
putchar('\n');
return (0);
}
