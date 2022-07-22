#include "main.h"

/**
*_isdigit - Écrivez une fonction qui vérifie un
*chiffre (0 à 9)
*@c: parameter
*Return: 0 or 1 always
*/
int _isdigit(int c)
{
char mot[10] = "0123456789";
int i;
for (i = 0; i < 10; i++)
{
if (c == mot[i])
{
return (1);
}
}
return (0);
}

