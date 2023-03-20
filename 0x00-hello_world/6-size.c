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
printf("size a of char: %d byte(s)\n", sizeof(c));
printf("size a of int: %d byte(s)\n", sizeof(i));
printf("size a of long int: %d byte(s)\n", sizeof(li));
printf("size a of long long int: %d byte(s)\n", sizeof(lli));
printf("size a of float: %d byte(s)\n", sizeof(f));
return (0);
}
