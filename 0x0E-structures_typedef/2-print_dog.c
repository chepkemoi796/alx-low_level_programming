#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
void print_dog(struct dog *d)
{
if (d->owner == NULL)
{
printf("nil\n");
}
if (d->name == NULL)
{
printf("Name : (nil)\n");
}
if (d == NULL)
return;
printf("name = %s\nage = %f\nowner = %s\n", d->name, d->age, d->owner);
}
