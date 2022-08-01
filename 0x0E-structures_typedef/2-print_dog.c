#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - print the dog
 * @d: struct dog
 */
void print_dog(struct dog *d)
{
char str[6] = "(nil)";
if (d == NULL)
{
printf("nothing");
}
else
{
if (d->name == NULL)
{
d->name = str;
}
if (d->owner == NULL)
{
d->owner = str;
}
printf("Name: %s\nAge: %f\nOwner: %s", d->name, d->age, d->owner);
}
}
