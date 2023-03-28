#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - prints a string in reverse followed by a new line
 * @l: variable 
 * @i: variable integer
 * _putchar - prints new line
 * @*s: points to variable
 * Return: void
 */
void print_rev(char *s)
{
int l = 0;
int i = 0;
while (*s != '\0')
{
l++;
s++;
}
s--;
for (i = l; i > 0; i--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
