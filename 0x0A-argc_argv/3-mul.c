#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argv: arguments
 * @argc: no of arguuments
 *
 * Return: (0)
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
int p = 1;
if (argc < 2)
{
printf("Error\n");
return (1);
}
else
{
p = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", p);
}
return (0);
}
