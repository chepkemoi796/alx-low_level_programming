#include "main.h"
#include <stdio.h>
#include <stdlib.h>
void *malloc_checked(unsigned int b)
{
char *c;
int *i;
float *f;
double *d;
c =(char*) malloc(b * sizeof(c));
if (c == NULL)
{
exit(98);
}
i = (int*)malloc(b * sizeof(i));
if (i == NULL)
{
exit(98);
}
f = (float*)malloc(b * sizeof(f));
if (f == NULL)
{
exit(98);
}
d = (double*) malloc(b * sizeof(d));
if (d == NULL)
{
exit(98);
}
return (0);
}	
