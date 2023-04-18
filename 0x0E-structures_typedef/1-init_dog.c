#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog -  initialize a variable of type struct dog
 * @name: element
 * @age: variable
 * @owner: variable
 * @dog *d: structure
 * @d: user defined variable
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
