#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument list
 * Return: (0)
 */
int main(int argc, char *argv[])
{
int count;
int mul = 1;
if (argc < 2)
{
printf("Error\n");
}
else
{
for (count = 1; count < argc; count++)
{
mul = (mul * atoi(argv[count]));
}
printf("%d\n", mul);
}
return (0);
}
