#include "main.h"
/**
*wildcmp - compare strings
*@s1: parameter
*@s2: parameter
*Return: integer
*/
int wildcmp(char *s1, char *s2)
{
if (*s1 == '*' || *s2 == '*')
{
return (1);
}
if(s1 == s2)
{
s1++;
s2++;
return (wildcmp(s1, s2));
}
else
{
return (0);
}
}
