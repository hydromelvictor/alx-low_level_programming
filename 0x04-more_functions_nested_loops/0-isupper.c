#include "main.h"

/**
*_isupper -  Écrivez une fonction qui vérifie les caractères
*majuscules
*@c: parameter
*Return: 1 or 0 always
*/
int _isupper(int c)
{
if (c <= 90 && c >= 65)
{
return (1);
}
else
{
_putchar(10);
return (0);
}
}