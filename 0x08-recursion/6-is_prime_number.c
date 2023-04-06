#include "main.h"
#include <stdio.h>
int is_prime_number(int n)
{
int r;
int count;
printf("enter positive number:");
scanf("%d", &n);
/* reads number entered */
for (count = 2; count < n; count++)
{
if (n % count == 0)
{
return (1);
}
else
{
return (0);
}
}
}
