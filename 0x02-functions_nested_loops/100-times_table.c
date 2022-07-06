#include "main.h"

/**
*print_times_table -> 
*@n: parameter
*/
void print_times_table(int n)
{
int i;
if(n <=15 && n >=0){
for(i = 0; i < 10; i++)
{
_putchar(n + '0');
_putchar('x');
_putchar(i + '0');
_putchar('=');
_putchar( (n * i) + '0');
_putchar(10);
}
}
}
