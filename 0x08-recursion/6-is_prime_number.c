#include "main.h"
int rec(int n)
{
if(n > 1)
{
return (n - 1);
}
return 2;
}
/**
*is_prime_number - returns 1 if the input integer is
*a prime number, otherwise return 0.
*@n: parameter
*Return: integer
*/
int is_prime_number(int n)
{
if(n % rec(rec(n)) == 0 && n )
{
return (1);
}
return (0);
}
