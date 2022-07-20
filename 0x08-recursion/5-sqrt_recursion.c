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
if (n == 0 && x != 0)
{
return (-1);
}
if (x == n * n)
{
return (n);
}
else
{
return (_pow(x, n - 1));
}
}
/**
*_sqrt_recursion - returns the natural square root
*of a number
*@n: parameter
*Return: integer
*/
int _sqrt_recursion(int n)
{
if (n == 1)
{
return (1);
}
if (n < 0)
{
return (-1);
}
else
{
return (_pow(n, n));
}
}
