#include <stdio.h>
#include "main.h"

/**
*print_to_98 -> Write a function that prints all natural numbers from n to 98
*@n: parameter
*/
void print_to_98(int n)
{
int i;
for (i = n; i <= 98; i++)
	printf("%d,  ", i);
printf("\n");
}
