#include <stdio.h>
#include <stdlib.h>
#ifndef DOG_H_
struct dog
{
char *name;
float age;
char *owner;
};
#endif
#ifndef DOG_H_
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
#ifndef DOG_H_
void print_dog(struct dog *d);
#endif
#ifndef DOG_H_
typedef struct dog dog_t;
#endif
#ifndef DOG_H_
void free_dog(dog_t *d);
#endif
