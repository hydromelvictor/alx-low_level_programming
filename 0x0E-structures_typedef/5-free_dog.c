#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - available
 * @d: parameter
 */
void free_dog(dog_t *d)
{
free(d);
}
