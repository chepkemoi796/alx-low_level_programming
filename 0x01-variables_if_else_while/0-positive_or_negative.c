#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - entry point
 *
 * Return: always 0 (Success)
 *
 */
/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("(rand() - RAND_MAX / 2) is positive\n");
}
else if (n < 0)
{
printf("(rand() - RAND_MAX / 2) is negative\n");
}
else
{
printf("(rand() - RAND_MAX / 2) is zero\n");
}
return (0);
}
