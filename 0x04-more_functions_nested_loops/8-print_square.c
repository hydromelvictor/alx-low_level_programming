#include"main.h"

/**
*print_square - Écrivez une fonction qui imprime un carré
*suivi d'une nouvelle ligne.
*@size: parameter
*/
void print_square(int size)
{
int i, j;

if (size < 0)
{
return;
}
else
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
_putchar('#');
}
_putchar(10);
}
}
}