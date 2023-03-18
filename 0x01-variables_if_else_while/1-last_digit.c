#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/*
 * main - Entry point
 *
 * Return 0 always (Success)
 *
 */

/* betty style doc for function main goes there */
int main(void)
{
int n = rand() - RAND_MAX / 2;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
{
printf("enter a random interger: ");
}
if (n > 5)
{
printf("Last digit of: ");
printf("is: ");
printf("and is greater than 5\n");
}
else if (n == 0)
{
printf("Last digit of: ");
printf("is: ");
printf("and is 0\n");
}
else if (n < 6)
{
printf("Last digit of: ");
printf("is: ");
printf("and is less than 6 and not 0\n");
}
return (0);
}
