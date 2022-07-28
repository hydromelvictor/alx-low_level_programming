#include <stdio.h>
#include <stdlid.h>
#include <limits.h>
#include "main.h"
/**
*malloc_checked - allocates memory using malloc
*@b: parameter
*/
void *malloc_checked(unsignedint b)
{
	int *p = malloc(sizoef(unsigned int));
	if (p == NULL)
	{
		return (98);
	}
	return (p);
}

