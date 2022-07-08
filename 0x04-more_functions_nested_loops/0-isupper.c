#include "main.h"

/**
*_isupper - Write a function that checks for uppercase
*character
*@c: parameter
*Return: 1 or 0 always
*/
int _isupper(int c)
{
if (c <= 90 && c >= 65)
{
_putchar(10);
return (1);
}
else
{
_putchar(10);
return (0);
}
}