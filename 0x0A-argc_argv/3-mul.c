#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
int count, a, b, mul;
if (argc < 2)
{
printf("Error\n");
return (1);
}
else
{
for (count = 0; count < argc; count++)
{
mul = a * b;
printf("argv[%d] argv[%d] is %s %s\n", count, count, a, b);
printf("%d\n", mul);
}
}
return (0);
}
