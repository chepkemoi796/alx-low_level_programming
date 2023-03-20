#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: (0) Always (Success)
 *
 */
int main(void)
{
char c;
int i;
long int li;
long long int lli;
float f;
printf("size of a char: %d byte(s)\n", sizeof(c));
printf("size of an int: %d byte(s)\n", sizeof(i));
printf("size of a long int: %d byte(s)\n", sizeof(li));
printf("size of a long long int: %d byte(s)\n", sizeof(lli));
printf("size of a float: %d byte(s)\n", sizeof(f));
return (0);
}
