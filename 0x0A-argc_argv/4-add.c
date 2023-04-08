#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
int i; int sum = 0;
for (i = 1; i < argc; i++)
{
if (argc < 1)
{
printf("0\n");
}
if (argv[i] < 0 || argv[i] > 9)
{
printf("Error\n");
return (1);
}
else
{
printf("argv[%d] = %s\n", i, argv[i]);
sum = sum + atoi(argv[i]);
}
printf("result = %d\n", sum);
}
return (0);
}
