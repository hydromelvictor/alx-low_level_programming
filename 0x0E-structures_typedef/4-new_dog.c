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
init_dog(wouh, name, age, owner);
return (wouh);
}
