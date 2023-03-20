#include <stdio.h>
/**
 * main - entry point
 *
 * Return: (0) Always (Success)
 *
 */
int main(void)
{
char q;
for ((q = 'z'); (q >= 'a'); q--)
{
putchar(q);
}
putchar('\n');
return (0);
}
