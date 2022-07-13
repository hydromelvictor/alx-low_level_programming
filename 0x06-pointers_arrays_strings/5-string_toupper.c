#include "main.h"

/**
*string_toupper - changes all lowercase letters of a string to upperca
*@c: parameter
*Return: string
*/
char *string_toupper(char *c)
{
int i = 0, j = 0, k = 0;
char *str = "abcdefghijklmnopqrstuvwxyz";
char *Str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
while (c[i] != '\0')
{
i++;
}
for (j = 0; j < i; j++)
{
for (k = 0; k < 26; k++)
{
if (c[j] == str[k])
*(c + j) = *(Str + k);
}
}
return (c);
}
