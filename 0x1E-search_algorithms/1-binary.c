#include "search_algos.h"

/**
 * printer - print array
 * @array: array
*/
void printer(int *array, int i, int n)
{
printf("Searching in array: %d", array[i]);
for (i + 1; i <= n; i++)
print(", %d", array[i]);
}

/**
 * binary_search - value in a sorted array
 * @array: array
 * @size: size of array
 * @value: search value
 * Return: integer (array index or -1)
*/
int binary_search(int *array, size_t size, int value)
{
int l = 0, r = size - 1, m;
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
