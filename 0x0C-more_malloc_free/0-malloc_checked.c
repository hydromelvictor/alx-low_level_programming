#include <stdio.h>
#include <stdlid.h>
#include <limits.h>
#include "main.h"
/**
*malloc_checked - allocates memory using malloc
*@b: parameter
*/
void *malloc_checked(unsigned int b)
{
	int *p = malloc(sizoef(unsigned int));
	if (p == NULL)
	{
		p = 98;
		return;
	}
}

