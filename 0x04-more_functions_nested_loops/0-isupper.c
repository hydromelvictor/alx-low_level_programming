#include "main.h"

/**
*_isupper - Write a function that checks for uppercase
*character
*@c: parameter
*Return: 1 or 0 always
*/
int _isupper(int c)
{
if (_putchar(c) <= 'Z' && _putchar(c) >= 'A')
{
return (1);
}
else
{
return (0);
}
}