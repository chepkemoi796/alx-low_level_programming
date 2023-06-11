#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: argument number
 * @argv: arguments
 * Return: (0)
 */
int main(int argc, char *argv[])
{
int i;
int sum = 0;
if (argc == 0)
{
printf("0\n");
}
for (i = 0; i < argc; i++)
{
if (atoi(argv[i]) < '0' && atoi(argv[i]) > '9')
{
printf("Error\n");
return (1);
}
else
{
sum += atoi(argv[i]);
}
}
printf("%d\n", sum);
return (0);
}
