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
int mul;
if (argc < 2)
{
printf("Error\n");
return (1);
}
else
{
mul = (atoi(argv[1]) * atoi(argv[2]));
printf("%d\n", mul);
}
return (0);
}
