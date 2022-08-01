#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - new create dog
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 * Return: dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *wouh = malloc(sizeof(dog_t));
if (wouh == NULL)
{
return (NULL);
}
*(wouh)->name = *name;
wouh->age = age;
*(wouh)->owner = *owner;
return (wouh);
}
