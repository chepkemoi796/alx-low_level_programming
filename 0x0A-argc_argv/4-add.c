#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array
 * Return: (0)
 */
int main(int argc, char *argv[])
{
int count;
int sum = 0;
if (argc < 1)
{
printf("0\n");
}
else
{
for (count = 1; count < argc; count++)
{
if (count < '0' && count > '9')
{
printf("Error\n");
return (0);
}
else
{
sum = sum + atoi(argv[count]);
}
}
printf("%d\n", sum);
}
return (0);
}
