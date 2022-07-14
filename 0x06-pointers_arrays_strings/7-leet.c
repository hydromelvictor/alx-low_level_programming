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
char *u = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
while (c[i] != '\0')
{
for (j = 0; j < 26; j++)
{
if (c[i] == s[j] || c[i] == u[j])
{
*(c + i) = *(t + j);
}
i++;
}
}
*(c + i) = '\0';
return (c);
}
