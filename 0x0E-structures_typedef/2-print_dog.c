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
return;
}
else
{
if (d->name == NULL)
{
d->name = str;
printf("Name: %s\n", "(nil)");
}
/*
else
{
printf("Name: %s\n", d->name);
}

printf("Age: %f\n", d->age);
*/
if (d->owner == NULL)
{
d->owner = str;
printf("Owner: %s", "(nil)");
}
/*
else
{
printf("Owner: %s", d->owner);
}
*/
printf("Name: %s\nAge: %f\nOwner: %s", d->name, d->age, d->owner);
}
}
