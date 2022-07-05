#include "main.h"

/**
*print_alphabet_x10 -> Write a function that prints the alphabet, in lowercase
*/
void print_alphabet_x10(void)
{
int i, j;
for (j = 0; j < 10; j++)
{
for (i = 97; i <= 122; i++)
	_putchar(i);
_putchar(10);
}
}
