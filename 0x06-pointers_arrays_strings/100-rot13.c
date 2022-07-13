#include "main.h"

/**
*rot13 - encodes a string using rot13
*@c: parameter
*Return: string
*/
char *rot13(char *c)
{
char *str = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char *rts = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
int i = 0, j = 0;
while (c[i] != '\0')
{
for (j = 0; j < 52; j++)
{
if (c[i] == str[j])
{
*(c + i) = *(rts + j);
break;
}
}
i++;
}
return (c);
}
