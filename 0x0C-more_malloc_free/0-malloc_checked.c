#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*malloc_checked - allocates memory using malloc
*@b: parameter
*/
void *malloc_checked(unsigned int b)
{
	void *p = malloc(sizeof(unsigned int));
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}

