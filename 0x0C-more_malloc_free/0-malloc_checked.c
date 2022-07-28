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
	void *p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}

