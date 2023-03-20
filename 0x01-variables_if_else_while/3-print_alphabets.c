#include <stdio.h>
/**
 * main - entry point
 *
 * Return: (0) Always (Success)
 *
 */
int main(void)
{
char qb;
for ((qb = 'a'); (qb <= 'z'); qb++)
{
putchar(qb);
}
for ((qb = 'A'); (qb <= 'Z'); qb++)
{
putchar(qb);
putchar('\n');
}
return (0);
}
