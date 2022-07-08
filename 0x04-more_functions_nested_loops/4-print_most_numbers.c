#include "main.h"

/**
*print_most_numbers - Write a function that prints the numbers
*from 0 to 9, followed by a new line.
*/
void print_most_numbers(void)
{
int i = 0;
while(i < 10)
{
if(i < 5 && i >0 && i % 2 != 0)
{
_putchar(i + '0');
}
i++;
}
_putchar(10);
}