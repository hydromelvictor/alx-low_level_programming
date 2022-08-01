#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialise dog
 * @d: struct
 * @name: mane
 * @age: age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d = malloc(sizeof(struct dog));
if (d == NULL)
{
return;
}
d->name = name;
d->age = age;
d->owner = owner;
}
