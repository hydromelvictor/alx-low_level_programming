#include <stdio.h>
#include "main.h"
/**
 * get_endianness - Get the endianness object
 * 
 * Return: int
 */
int get_endianness(void)
{
    unsigned int value = 0x1;
    char *r = (char *) &value;
 
    if (*r == 1) 
        return 1;
    else
        return 0; 
}
