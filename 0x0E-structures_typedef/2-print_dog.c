#include <stdio.h>
#include "dog.h"
/**
 * print_dog -  prints a struct dog
 * @d: pointer to values
 * Return: void
 */
void print_dog(struct dog *d)
{
if (d->name == NULL)
printf("(nil)\n");
if (d->age == 0.0)
printf("(nil)\n");
if (d->owner == NULL)
printf("(nil)\n");
if (d == NULL)
printf("\n");
printf("%s\n%f\n%s\n", d->name, d->age, d->owner);
}
