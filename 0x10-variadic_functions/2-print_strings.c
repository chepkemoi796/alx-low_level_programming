#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: string
 * @n: number of arguments
 * @...: arguments
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
char *p;
unsigned int i;
va_start(args, n);
for (i = 0; i < n; i++)
{
p = va_arg(args, char*);
if (p == NULL)
printf("nil");
else
printf("%s", p);
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(args);
}
