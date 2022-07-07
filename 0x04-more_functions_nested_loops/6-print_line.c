#include "main.h"

/**
*print_line - Write a function that draws a straight line
*in the terminal.
*@n: parameter
*/
void print_line(int n)
{
int i = 0;
while (i < n)
{
_putchar('_');
i++;
}
_putchar(10);
}