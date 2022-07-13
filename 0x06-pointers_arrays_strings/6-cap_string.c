#include "main.h"

/**
*cap_string - capitalizes all words of a st
*@c: parameter
*Return: string
*/
char *cap_string(char *c)
{
int i = 0, j = 0, k = 0, p = 0;
char *str = "abcdefghijklmnopqrstuvwxyz";
char *Str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char *sep = " \t\n,;.!?\"(){}";
while (c[i] != '\0')
{
i++;
}
for (j = 0; j < i; j++)
{
for (k = 0; k < 26; k++)
{
if (j == 0)
{
if (c[j] == str[k])
c[j] = Str[k];
}
else
{
for (p = 0; p < 13; p++)
{
if (c[j - 1] == sep[p])
{
if (c[j] == str[k])
c[j] = Str[k];
}
}
}
}
}
return (c);
}
