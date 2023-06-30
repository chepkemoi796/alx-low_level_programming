#include <stdio.h>
#include <stdlib.h>
/**
 * print - prints before the main function
 * Return: (0)
 */
int print(void) __attribute__((constructor));
int print(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
return (0);
}
