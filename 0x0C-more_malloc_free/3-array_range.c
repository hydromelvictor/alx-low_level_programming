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
plage = (min < 0 && max < 0) ? ((-min) - (-max)) + 1 :
(min > 0 && max >= 0) ? ((-min) + max) + 2 : min - max + 1;
nbre = malloc(plage * sizeof(int));
if (nbre == NULL)
{
return (NULL);
}
for (i = min; i <= max; i++)
{
nbre[i] = i;
}
return (nbre);
}
