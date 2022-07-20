#include "main.h"
/**
*change - compare string
*@s: parameter
*Return: integer
*/
char change(char *s)
{
if (*s == '\0')
{
return (0);
}
s++;
change(s);
s--;
return (*s);
}
/**
*is_palindrome - returns 1 if a string is a palindrome and 0 if not
*@s: parameter
*Return: integer
*/
int is_palindrome(char *s)
{
if (*s != '\0')
{
if (*s == change(s))
{
s++;
return (is_palindrome(s));
}
else
{
return (0);
}
}
return (1);
}
