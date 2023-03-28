#include "main.h"
/**
 * puts2 -  prints every other character of a string, starting with the first character
 * @x: variable
 * @t: integer variable
 * @*y: pointer holding address
 * @m: variable to increase by
 * _putchar - prints new line
 * @*str: pointer
 * Return: void
 */
void puts2(char *str)
{
int x = 0;
int t = 0;
char *y = str;
int m;
while(*y != '\0')
{
y++;
x++;
}
t = x - 1;
for (m = 0; m <= t; m++)
if (m % 2 == 0)
{
_putchar(str[0]);
}
_putchar('\n');
}
