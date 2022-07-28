#include <stdio.h>
#include <stdlib.h>
/**
 *array_range - creates an array of integers.
 * @min: parameter
 * @max: parameter
 * Return: integer
 */
int *array_range(int min, int max)
{
int i, *nbre, plage;
if (min > max)
{
return (NULL);
}
plage = max - min + 1;
nbre = malloc(plage * sizeof(int));
if (nbre == NULL)
{
return (NULL);
}
for (i = 0; i <= plage; i++)
{
nbre[i] = min + i;
}
return (nbre);
}
