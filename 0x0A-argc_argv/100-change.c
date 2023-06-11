#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
int i, y = 0;
int num = atoi(argv[1]);
int cents[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
if (num < 0)
{
printf("0\n");
return (0);
}
for (i = 0; i < argc; i++)
{
while (num >= cents[i])
{
y++;
num -= cents[i];
}
}
printf("%d\n",y);
return (0);
}
