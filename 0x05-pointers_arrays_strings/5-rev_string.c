#include "main.h"
/**
 * rev_string - reverses a string
 * @*s:pointer
 * @s: pointer value
 * @b: char avriable
 * @count: variable to count
 * @i: integer variable
 * Return: void
 */
void rev_string(char *s)
{
char b = s[0];
int count = 0;
int i;
while (s[count] != '\0')
count++;
for (i = 0; i < count; i++)
{
count--;
b = s[i];
s[i] = s[count];
s[count] = b;
}
}
