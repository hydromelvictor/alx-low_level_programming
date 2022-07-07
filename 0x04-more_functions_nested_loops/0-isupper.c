#include "main.h"

/**
*_isupper -  Écrivez une fonction qui vérifie les caractères
*majuscules
*@c: parameter
*Return: 1 or o always
*/
int _isupper(int c)
{
if (c <= 90 && c >= 65)
{
return (1);
}
return (0);
}