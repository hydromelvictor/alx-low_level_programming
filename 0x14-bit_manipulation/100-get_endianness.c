#include <stdio.h>
#include "main.h"
int get_endianness(void)
{
    unsigned int value = 0x1;
    char *r = (char *) &value;
 
    if (*r == 1) 
        return 1;
    else
        return 0; 
}
