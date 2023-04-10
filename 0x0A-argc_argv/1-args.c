#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: list of arguments
 * @__attribute__((unused)): compile unused functions and variables
 * Return: (0)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
