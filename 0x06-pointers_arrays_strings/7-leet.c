#include "main.h"

/**
*leet - encodes a string into 1337.
*@c: parameter
*Return: string
*/
char *leet(char *c)
{
int i = 0, j = 0;
char *s = "abcdefghijklmnopqrstuvwxyz";
char *t = "4bcd3fghijk1mn0pqrs7uvwxyz";
char *g = "4BCD3FGHIJK1MN0PQRS7UVWXYZ";
char *u = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
while (c[i] != '\0')
{
for (j = 0; j < 26; j++)
{
if (c[i] == s[j])
{
*(c + i) = *(t + j);
}
if (c[i] == u[j])
{
*(c + i) = *(g + j);
}
i++;
}
}
*(c + i) = '\0';
return (c);
}
