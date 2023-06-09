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
int i, sum = 0;
for (i = 0; i < argc; i++)
{
if (atoi(argv[i]) > 0)
{
if (argc <= 0)
printf("0\n");
if (argv[i] < 0 && argv[i] > 9)
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}
}
printf("%d\n", sum);
return (0);
}
