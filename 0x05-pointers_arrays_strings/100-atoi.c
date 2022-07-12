#include "main.h"

/**
*_atoi - convert a string to an integer
*@s: parameter
*Return: integer
*/
int _atoi(char *s)
{
int i = 0, j;
char *n = 0;
while (s[i] != '\0')
{
i++;
}
i = i + 1;
for (j = 0; j <= i; j++)
{
if (((_putchar(s[i]) == _putchar(45) && _putchar(s[i + 1]) <= _putchar(57) &&
_putchar(s[i + 1]) >= _putchar(48)) || _putchar(s[i]) <= _putchar(57) &&
_putchar(s[i]) >= _putchar(48)))
{
while (s[i + 1] <= _putchar(57) && s[i + 1] >= _putchar(48))
{
n += s[i];
}
}
}
i = 2;
char p = n[1];
while (n[i] != '\0')
{
p += s[i];
}
return (p);
}