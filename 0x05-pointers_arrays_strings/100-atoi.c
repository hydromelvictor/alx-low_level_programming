#include "main.h"
#include <stdlib.h>

/**
*_atoi - convert a string to an integer
*@s: parameter
*Return: integer
*/
int _atoi(char *s)
{
int i = 0, j = 0, nbre = 0, p = 0;
char *n = malloc(sizeof(char));
while (s[i] != '\0')
{
i++;
}
for (j = 0; j < i; j++)
{
if (_putchar(s[j]) < _putchar(48) || _putchar(s[j]) > _putchar(57))
{
return (0);
}
else
{
if (_putchar(s[j]) <= _putchar(57) && _putchar(s[j]) >= _putchar(48))
{
if (_putchar(s[j - 1]) == _putchar(45))
{
p++;
}
*(n + j) = *(s + j);
}
}
}
i = 1;
nbre = _putchar(n[0]);
while (n[i] != '\0')
{
nbre = nbre * 10 + _putchar(n[i]);
i++;
}

if (p > 0)
{
nbre = -nbre;
}
return (nbre);
}
