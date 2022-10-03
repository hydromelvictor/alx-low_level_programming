#include "main.h"

/**
*count - length of string
*@s: parameter
*Return: integer
*/
int count(char *s)
{
int i;
while (s[i] != '\0')
{
i++;
}
return (i);
}

/**
*cmp - comparison char
*@str1: parameter
*@str2: parameter
*Return: 0 if equals, 1 if first is great and -1 if first is less
*/
int cmp(char str1, char str2)
{
int i = 0;
if (str1 < str2)
i = -1;
else if (str1 > str2)
i = 1;
else
i = 0;
return (i);
}

/**
*_sup - Write a function that compares two strings
*@s1: parameter
*@s2: parameter
*Return: integer
*/
int _sup(char *s1, char *s2)
{
int i = count(s1), k = 0, s = 0;
for (k = 0; k < i; k++)
{
if (k == i)
s = 1;
else
{
s = cmp(s1[k], s2[k]);
break;
}
}
return (s);
}

/**
*_sub - Write a function that compares two strings
*@s1: parameter
*@s2: parameter
*Return: integer
*/
int _sub(char *s1, char *s2)
{
int j = count(s2), k = 0, s = 0;
for (k = 0; k < j; k++)
{
if (k == j)
s = -1;
else
{
s = cmp(s1[k], s2[k]);
break;
}
}
return (s);
}

/**
*_strcmp - Write a function that compares two strings
*@s1: parameter
*@s2: parameter
*Return: integer
*/
int _strcmp(char *s1, char *s2)
{
int i = count(s1), j = count(s2), k = 0, n = 0, s = 0;
if (i == j)
{
for (k = 0; k < i; k++)
{
if (cmp(s1[k], s2[k]) == 0)
n++;
else
s = cmp(s1[k], s2[k]);
}
}
else if (i < j)
{
s = _sup(s1, s2);
}
else
{
s = _sub(s1, s2);
}
if (n == i)
{
s = 0;
}
return (s);
}
