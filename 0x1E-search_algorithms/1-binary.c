#include "search_algos.h"

/**
 * printer - print array function for snd func
 * @array: array
 * @i: begin index
 * @n: end index
*/
void printer(int *array, size_t i, size_t n)
{
size_t s;
printf("Searching in array: %d", array[i]);
for (s = i + 1; s <= n; s++)
printf(", %d", array[s]);

printf("\n");
}

/**
 * binary_search - value in a sorted array hjkkn ;k l
 * @array: array jbjugghjguj jbpmmp kl,
 * @size: size of array fuihhoù poùpl
 * @value: search valuekk knjpôh
 * Return: integer (array index or -1)
*/
int binary_search(int *array, size_t size, int value)
{
size_t l = 0, r = size - 1, m;
if (array == NULL)
return (-1);
    
while (l <= r)
{
printer(array, l, r);
m = (l + r) / 2;
if (array[m] < value)
l = m + 1;
else if (array[m] > value)
r = m - 1;
else
return (m);
}
return (-1);
}
