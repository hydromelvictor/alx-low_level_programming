#include "main.h"
/**
*rec - function simple
*@n: parameter
*@i: parameter
*Return: integer
*/
int rec(int n, int i)
{
if (n <= 1)
{
return (0);
}
if (n % i == 0 && i > 1 && i < n)
{
return (0);
}
return (1);
}
/**
*is_prime_number - returns 1 if the input integer is
*a prime number, otherwise return 0.
*@n: parameter
*Return: integer
*/
int is_prime_number(int n)
{
return (rec(n, 1));
}
