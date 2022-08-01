#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - print the dog
 * @d: struct dog
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
else
{
if (d->name == NULL)
{
printf("Name: %s", "(nil)");
}
else
{
printf("Name: %s\n", d->name);
}
if (d->owner == NULL)
{
printf("Owner: %s", "(nil)");
}
else
{
printf("Owner: %s", d->owner);
}
}
}
