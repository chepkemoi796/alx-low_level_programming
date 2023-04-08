#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv[]: list of arguments
 * @__attribute__((unused)): compile unused functions and variables
 * @count: index
 * Return: (0)
 */
int main(int argc, char* argv[]__attribute__((unused))) 
{
int count;
for ( count = 0; count < argc; count++)
{
printf("%d\n", argc);
}
return (0);
}
