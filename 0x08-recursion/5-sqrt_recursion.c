#include "main.h"
/**
*_pow - returns the value of x raised
*to the power of 2
*@x: parameter
*@n: parameter
*Return: integer
*/
int _pow(int x, int n)
{
if (x == 1)
{
return (1);
}
if (x < 0 || n == x)
{
return (-1);
}
if (x == n * n)
{
return (n);
}
return (_pow(x, n + 1));
}
/**
*_sqrt_recursion - returns the natural square root
*of a number
*@n: parameter
*Return: integer
*/
int _sqrt_recursion(int n)
{
return (_pow(n, 1));
}
