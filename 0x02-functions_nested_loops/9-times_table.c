#include "main.h"

/***
*times_table -> Write a function that prints the 9 times table
*/
void times_table(void)
{
int i;
	for (i = 0; i < 11; i++)
	 {
    		_putchar(9 + '0');
    		_putchar('x');
    		_putchar(i + '0');
    		_putchar('=');
    		_putchar( (9*i ) + '0');
    		_putchar(\n);
    	}	
}
