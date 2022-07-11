#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*crackme - generates random valid password
*/
void crackme(void)
{
int i;
for(i = 0; i < 8; i++)
{
printf("%d", rand());
}
}