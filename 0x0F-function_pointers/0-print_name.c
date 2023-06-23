#include <stdio.h>
/**
 * print_name - prints name
 * @f: function pointer
 * @name: pointer to name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
