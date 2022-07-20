#include "main.h"
/**
**cmp - comparation
*@a: parameter
*@b: parameter
*Return: integer
*/
int cmp(char a, char b)
{
if(a == '*' || b == '*')
{
return (1);
}
else
{
return (0);
}
}
/**
*wildcmp - compare strings
*@s1: parameter
*@s2: parameter
*Return: integer
*/
int wildcmp(char *s1, char *s2)
{
if(cmp(*s1, *s2) == 1)
{
s1++;
s2++;
return wildcmp(s1, s2);
}
else
{
return (0);
}
}
