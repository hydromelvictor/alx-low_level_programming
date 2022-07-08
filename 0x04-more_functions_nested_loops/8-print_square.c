#include"main.h"

/**
*print_square - Écrivez une fonction qui imprime un carré
*suivi d'une nouvelle ligne.
*@size: parameter
*/
void print_square(int size)
{
int i = size;
while (i > 0)
{
int j = size;
while (j > 0)
{
_putchar('#');
j--;
}
if(j < size-1)
{
_putchar(10);
}
i--;
}
}